#!/bin/bash
BASE_DIR=$(dirname "$(realpath $0)")
ISLAND_DIR=$(dirname "$BASE_DIR")
PORYTILES=$ISLAND_DIR"/tools/porytiles/porytiles"

input=$BASE_DIR"/CONFIGURATION"

echo "$ISLAND_DIR"
echo "Reading $input"
while IFS= read -r line
do
  arr=($line)
  type=${arr[0]}
  data_dir=${arr[1]}
  pory_dir=${arr[2]}
  primary_pory_dir=${arr[3]} # for secondary

  if [[ "$type" == "primary" ]]; then
    echo "$pory_dir/$type --> $data_dir"
    $PORYTILES compile-primary -o $ISLAND_DIR/data/tilesets/primary/$data_dir/ -Wall -pals-primary-override=7 $ISLAND_DIR/porytiles/$pory_dir/primary/
  elif [[ "$type" == "secondary" ]]; then
    echo "$pory_dir/$type --> $data_dir + $primary_pory_dir/primary"
    $PORYTILES compile-secondary -o $ISLAND_DIR/data/tilesets/secondary/$data_dir/ -Wall -pals-primary-override=7 $ISLAND_DIR/porytiles/$pory_dir/secondary $ISLAND_DIR/porytiles/$primary_pory_dir/primary
  elif [[ -z "$type" ]]; then # check if empty
    continue
  else
    echo "$type is not correct type. Specify either primary or secondary."
  fi

done < "$input"
