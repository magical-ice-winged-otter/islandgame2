#!/bin/bash

BASE_DIR=$(dirname "$(realpath $0)")

# new version of this script 

# COMMAND_FILES=$(find $BASE_DIR -iname *.compile.sh)

# # We want to make sure our working directory is the project root,
# # which the compile commands depend on.
# cd ..

# for command_file in $COMMAND_FILES 
# do
#   command=$(cat $command_file)
#   echo "running $command_file"
#   eval $command
# done

# the old version of this script 

ISLAND_DIR=$(dirname "$BASE_DIR")
PORYTILES=$ISLAND_DIR"/tools/porytiles/porytiles"
BEHAVIORS=$ISLAND_DIR/porytiles/metatile_behaviors.h
input=$BASE_DIR"/CONFIGURATION"

echo "$ISLAND_DIR"
echo "Reading $input"
echo

while IFS= read -r line
do
  arr=($line)
  type=${arr[0]}
  data_dir=${arr[1]}
  pory_dir=${arr[2]}
  primary_pory_dir=${arr[3]} # for secondary

  if [[ "$type" == "primary" ]]; then
    echo "PRIMARY: $pory_dir/$type --> $data_dir"
    $PORYTILES compile-primary  -output=$ISLAND_DIR/data/tilesets/primary/$data_dir  -tiles-output-pal=greyscale  -target-base-game=pokeemerald  -transparency-color=24,40,80  -default-behavior=MB_NORMAL  -assign-explore-cutoff=2  -assign-algorithm=bfs  -best-branches=4  $ISLAND_DIR/porytiles/$pory_dir $BEHAVIORS
    # $PORYTILES compile-primary -Wall -assign-algo=bfs  -o $ISLAND_DIR/data/tilesets/primary/$data_dir/  $ISLAND_DIR/porytiles/$pory_dir/primary/
  elif [[ "$type" == "secondary" ]]; then
    echo "SECONDARY: $pory_dir/$type --> $data_dir + $primary_pory_dir/primary"
    $PORYTILES compile-secondary  -output=$ISLAND_DIR/data/tilesets/secondary/$data_dir  -tiles-output-pal=greyscale  -target-base-game=pokeemerald  -transparency-color=24,40,80  -default-behavior=MB_NORMAL  -assign-explore-cutoff=2  -assign-algorithm=bfs  -best-branches=4  -primary-assign-explore-cutoff=2  -primary-assign-algorithm=bfs  -primary-best-branches=4  $ISLAND_DIR/porytiles/$pory_dir $ISLAND_DIR/porytiles/$primary_pory_dir $BEHAVIORS
    # $PORYTILES compile-secondary -Wall -assign-algo=bfs -o $ISLAND_DIR/data/tilesets/secondary/$data_dir/ $ISLAND_DIR/porytiles/$pory_dir/secondary $ISLAND_DIR/porytiles/$primary_pory_dir/primary
  elif [[ -z "$type" ]]; then # check if empty
    continue
  else
    echo "$type is not correct type. Specify either primary or secondary."
  fi

done < "$input"
