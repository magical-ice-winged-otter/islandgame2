#!/bin/bash

BASE_DIR=$(dirname "$(realpath $0)")
INPUT_FILES=$(find $BASE_DIR -iname *.aseprite)

for input_file in $INPUT_FILES
do
    dir=$(dirname $input_file)

    # Each one of these layers should be split into its own file.
    layers="bottom middle top"

    for layer in $layers
    do
        output_file="$dir/$layer.png"
        output_file_rel=$(realpath --relative-to=$BASE_DIR $output_file)
        input_file_rel=$(realpath --relative-to=$BASE_DIR $input_file)
        echo "$input_file_rel -> $output_file_rel"
        aseprite -b --layer $layer $input_file --save-as $output_file
    done
    echo

done

