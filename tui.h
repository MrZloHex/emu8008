#ifndef TUI_DOT_H
#define TUI_DOT_H

#if defined(_WIN32) || defined(_WIN64) 
    #include <windows.h>
    #define msleep(msec) Sleep(msec)
#else
    #include <unistd.h>
    #define msleep(msec) usleep(msec*1000)
#endif

void tui();

#endif