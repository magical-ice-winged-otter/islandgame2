#!/bin/bash

# We want to process all aseprite files in subdirectories.
INPUT_FILES=$(find . -iname *.aseprite)

for INPUT_FILE in $INPUT_FILES
do
    DIR=$(dirname $INPUT_FILE)

    # Each one of these layers should be split into its own file.
    LAYERS="bottom middle top"

    for LAYER in $LAYERS
    do
        OUTPUT_FILE="$DIR/$LAYER.png"
        echo "from $INPUT_FILE exporting $OUTPUT_FILE"
        aseprite -b --layer $LAYER $INPUT_FILE --save-as $OUTPUT_FILE
    done

done

