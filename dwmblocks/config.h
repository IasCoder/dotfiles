// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {

    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "nettraf", 1, 16},
    {"", "cpu", 10, 1},
    {"", "disk", 100, 1},
    {"", "ram", 10, 1},
    {"", "battery", 60, 1},
    {"", "vol", 60, 1},
    {"", "wtt", 100, 1},
    {"", "upd", 4000, 1},
    {"", "upt", 60, 1},
    {"", "clock", 60, 1},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = "   |   ";
static unsigned int delimLen = 15;
