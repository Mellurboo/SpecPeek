#ifndef _TERMINAL_H
#define _TERMINAL_H     1

#define CLEAR_SCREEN() printf("\033[2J\033[H")

/*
    GCC Colour Escape Codes (More Portable)
*/
#if defined(__GNUC__) && (!defined(__MINGW32__)) && !defined(__stanix__)
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[94m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#define BBLACK   "\033[30m"
#define BRED     "\033[31m"
#define BGREEN   "\033[32m"
#define BYELLOW  "\033[33m"
#define BBLUE    "\033[34m"
#define BMAGENTA "\033[35m"
#define BCYAN    "\033[36m"
#define BWHITE   "\033[37m"
#define RESET    "\033[0m"
#endif

/*
    MINGW Colour Escape codes (For Windows)
    these are more strict, using the GNUC based escape
    codes works, however it leaves residual characters because
    ofc it does, to clarify this only happens in the legacy CMD not
    the new Microsoft Terminal.
*/
#if defined(__MINGW32__) || defined(__stanix__)
#define BLACK   "\x1b[0;30m"
#define RED     "\x1b[0;31m"
#define GREEN   "\x1b[0;32m"
#define YELLOW  "\x1b[0;33m"
#define BLUE    "\x1b[0;34m"
#define MAGENTA "\x1b[0;35m"
#define CYAN    "\x1b[0;36m"
#define WHITE   "\x1b[0;37m"

#define BBLACK   "\x1b[1;30m"
#define BRED     "\x1b[1;31m"
#define BGREEN   "\x1b[1;32m"
#define BYELLOW  "\x1b[1;33m"
#define BBLUE    "\x1b[1;34m"
#define BMAGENTA "\x1b[1;35m"
#define BCYAN    "\x1b[1;36m"
#define BWHITE   "\x1b[1;37m"

#define RESET    "\x1b[0m"
#endif

#endif