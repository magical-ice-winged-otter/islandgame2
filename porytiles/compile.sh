#!/bin/bash
BASE_DIR=$(dirname "$(realpath $0)")
echo
echo "=== COMPILING ASEPRITE ==="
echo
$BASE_DIR/step_compile_aseprite.sh
echo
echo "=== COMPILING PORYTILES ==="
echo
$BASE_DIR/step_compile_porytiles.sh
echo
echo "=== DONE ==="
echo
