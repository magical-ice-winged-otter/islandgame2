# Compile the game
CORE_COUNT=$(nproc)
echo -e "\nCompiling game, using $CORE_COUNT cores\n"
make modern -j $(nproc) >/dev/null

if [ $? -eq 0 ] # Did compilation succeed?
then

type mgba >/dev/null 2>/dev/null

if [ $? -eq 0 ] # MGBA in path?
then
    echo -e "\nRunning emulator with build.\n"
    mgba pokeemerald_modern.gba
else
    echo -e "\nCannot run emulator after build: ensure 'mgba' is in the path.\n"
fi # MGBA in path?

fi # Did compilation succeed?
