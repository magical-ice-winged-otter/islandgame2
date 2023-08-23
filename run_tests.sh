CORE_COUNT=$(nproc)
echo -e "\nTesting game, using $CORE_COUNT cores\n"

# Setting environment variables
GAME_VERSION=EMERALD
GAME_REVISION=0
GAME_LANGUAGE=ENGLISH
MODERN=1
COMPARE=0
TEST=1

# Building tests
make -j ${nproc} -O pokeemerald-test.elf >/dev/null
make -j ${nproc} check
