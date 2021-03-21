#include "tui.h"
#include <ncurses.h>
#include <string.h>

#define MY_PAIR 1

int row, col;

const char *line_n10 = ""; 
const char *line_n9 = "";
const char *line_n8 = "";
const char *line_n7 = "";
const char *line_n6 = "";
const char *line_n5 = "";
const char *line_n4 = "";
const char *line_n3 = "";
const char *line_n2 = "";
const char *line_n1 = "";
const char *line = "";
const char *line_1 = "";
const char *line_2 = "";
const char *line_3 = "";
const char *line_4 = "";
const char *line_5 = "";
const char *line_6 = "";
const char *line_7 = "";
const char *line_8 = "";
const char *line_9 = "";
const char *line_10 = "";


void print_8008 () {
    mvwprintw(stdscr, (row/2)-5, (col - strlen(line_n4))/2, "%s", line_n4);
    mvwprintw(stdscr, (row/2)-4, (col - strlen(line_n3))/2, "%s", line_n3);
    mvwprintw(stdscr, (row/2)-3, (col - strlen(line_n2))/2, "%s", line_n2);
    mvwprintw(stdscr, (row/2)-2, (col - strlen(line_n1))/2, "%s", line_n1);
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2,    "%s", line);
    mvwprintw(stdscr, (row/2),   (col - strlen(line_1))/2,  "%s", line_1);
    mvwprintw(stdscr, (row/2)+1, (col - strlen(line_2))/2,  "%s", line_2);
    mvwprintw(stdscr, (row/2)+2, (col - strlen(line_3))/2,  "%s", line_3);
    mvwprintw(stdscr, (row/2)+3, (col - strlen(line_4))/2,  "%s", line_4);

    mvwprintw(stdscr, (row/2)+5, (col - strlen(line_6))/2,  "%s", line_6);
    mvwprintw(stdscr, (row/2)+6, (col - strlen(line_7))/2,  "%s", line_7);
    mvwprintw(stdscr, (row/2)+7, (col - strlen(line_8))/2,  "%s", line_8);
    mvwprintw(stdscr, (row/2)+8, (col - strlen(line_9))/2,  "%s", line_9);
    mvwprintw(stdscr, (row/2)+9, (col - strlen(line_10))/2, "%s", line_10);
}

void print_8008_ () {
    mvwprintw(stdscr, (row/2)-11, (col - strlen(line_n10))/2, "%s", line_n10);
    mvwprintw(stdscr, (row/2)-10, (col - strlen(line_n9))/2, "%s", line_n9);
    mvwprintw(stdscr, (row/2)-9, (col - strlen(line_n8))/2, "%s", line_n8);
    mvwprintw(stdscr, (row/2)-8, (col - strlen(line_n7))/2, "%s", line_n7);
    mvwprintw(stdscr, (row/2)-7, (col - strlen(line_n6))/2, "%s", line_n6);
    mvwprintw(stdscr, (row/2)-6, (col - strlen(line_n5))/2, "%s", line_n5);
    mvwprintw(stdscr, (row/2)-5, (col - strlen(line_n4))/2, "%s", line_n4);
    mvwprintw(stdscr, (row/2)-4, (col - strlen(line_n3))/2, "%s", line_n3);
    mvwprintw(stdscr, (row/2)-3, (col - strlen(line_n2))/2, "%s", line_n2);
    mvwprintw(stdscr, (row/2)-2, (col - strlen(line_n1))/2, "%s", line_n1);
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2,    "%s", line);
    mvwprintw(stdscr, (row/2),   (col - strlen(line_1))/2,  "%s", line_1);
    mvwprintw(stdscr, (row/2)+1, (col - strlen(line_2))/2,  "%s", line_2);
    mvwprintw(stdscr, (row/2)+2, (col - strlen(line_3))/2,  "%s", line_3);
    mvwprintw(stdscr, (row/2)+3, (col - strlen(line_4))/2,  "%s", line_4);
    mvwprintw(stdscr, (row/2)+4, (col - strlen(line_5))/2,  "%s", line_5);
    mvwprintw(stdscr, (row/2)+5, (col - strlen(line_6))/2,  "%s", line_6);
    mvwprintw(stdscr, (row/2)+6, (col - strlen(line_7))/2,  "%s", line_7);
    mvwprintw(stdscr, (row/2)+7, (col - strlen(line_8))/2,  "%s", line_8);
    mvwprintw(stdscr, (row/2)+8, (col - strlen(line_9))/2,  "%s", line_9);
    mvwprintw(stdscr, (row/2)+9, (col - strlen(line_10))/2, "%s", line_10);
}

void print_info () {
    mvwprintw(stdscr, 5, 10,"%s", line_n10);
    mvwprintw(stdscr, 6, 10, "%s", line_n9);
    mvwprintw(stdscr, 7, 10, "%s", line_n8);
    mvwprintw(stdscr, 8, 10, "%s", line_n7);
    mvwprintw(stdscr, 9, 10, "%s", line_n6);
    mvwprintw(stdscr, 10, 10, "%s", line_n5);
    mvwprintw(stdscr, 11, 10, "%s", line_n4);
    mvwprintw(stdscr, 12, 10, "%s", line_n3);
    mvwprintw(stdscr, 13, 10, "%s", line_n2);
    mvwprintw(stdscr, 14, 10, "%s", line_n1);
    mvwprintw(stdscr, 15, 10,    "%s", line);
    mvwprintw(stdscr, 16, 10,  "%s", line_1);
    mvwprintw(stdscr, 17, 10,  "%s", line_2);
    mvwprintw(stdscr, 18, 10,  "%s", line_3);
    mvwprintw(stdscr, 19, 10,  "%s", line_4);
    mvwprintw(stdscr, 20, 10,  "%s", line_5);
    mvwprintw(stdscr, 21, 10,  "%s", line_6);
    mvwprintw(stdscr, 22, 10,  "%s", line_7);
    mvwprintw(stdscr, 23, 10,  "%s", line_8);
    mvwprintw(stdscr, 24, 10,  "%s", line_9);
    mvwprintw(stdscr, 25, 10, "%s", line_10);
}

void intro () {
    init_pair(MY_PAIR, COLOR_BLACK, COLOR_WHITE);
    attron(COLOR_PAIR(MY_PAIR));
    line_n1 = "                               ";
    line =    "    PLEASE MAKE FULL SCREEN    ";
    line_1 =  "                              ";
    mvwprintw(stdscr, (row/2)-2, (col - strlen(line_n1))/2, "%s", line_n1);
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2, "%s", line);
    mvwprintw(stdscr, (row/2),   (col - strlen(line_1))/2, "%s", line_1);
    refresh();
    msleep(2000);   
    attroff(COLOR_PAIR(MY_PAIR));

    clear();
    refresh();
    line = "8008";
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2, "%s", line);
    refresh();
    msleep(300);


    clear();
    refresh();
    line = "8 0 0 8";
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2, "%s", line);
    refresh();
    msleep(300);


    clear();
    refresh();
    line_n2 = " ___   ___   ___   ___ ";
    line_n1 = "/   \\ /   \\ /   \\ /   \\";
    line =    "\\___/ |   | |   | \\___/";
    line_1 =  "/   \\ |   | |   | /   \\";
    line_2 =  "\\___/ \\___/ \\___/ \\___/";
    mvwprintw(stdscr, (row/2)-3, (col - strlen(line_n2))/2, "%s", line_n2);
    mvwprintw(stdscr, (row/2)-2, (col - strlen(line_n1))/2, "%s", line_n1);
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2,    "%s", line);
    mvwprintw(stdscr, (row/2),   (col - strlen(line_1))/2,  "%s", line_1);
    mvwprintw(stdscr, (row/2)+1, (col - strlen(line_2))/2,  "%s", line_2);
    refresh();
    msleep(300);

    
    clear();
    refresh();
    line_n2 = " ###   ###   ###   ### ";
    line_n1 = "#   # #   # #   # #   #";
    line =    " ###  #   # #   #  ### ";
    line_1 =  "#   # #   # #   # #   #";
    line_2 =  " ###   ###   ###   ### ";
    mvwprintw(stdscr, (row/2)-3, (col - strlen(line_n2))/2, "%s", line_n2);
    mvwprintw(stdscr, (row/2)-2, (col - strlen(line_n1))/2, "%s", line_n1);
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2,    "%s", line);
    mvwprintw(stdscr, (row/2),   (col - strlen(line_1))/2,  "%s", line_1);
    mvwprintw(stdscr, (row/2)+1, (col - strlen(line_2))/2,  "%s", line_2);
    refresh();
    msleep(300);


    clear();
    refresh();
    line_n3 = " #####   #####   #####   ##### ";
    line_n2 = "#     # #     # #     # #     #";
    line_n1 = "#     # #     # #     # #     #";
    line =    " #####  #     # #     #  ##### ";
    line_1 =  "#     # #     # #     # #     #";
    line_2 =  "#     # #     # #     # #     #";
    line_3 =  " #####   #####   #####   ##### ";
    mvwprintw(stdscr, (row/2)-4, (col - strlen(line_n3))/2, "%s", line_n3);
    mvwprintw(stdscr, (row/2)-3, (col - strlen(line_n2))/2, "%s", line_n2);
    mvwprintw(stdscr, (row/2)-2, (col - strlen(line_n1))/2, "%s", line_n1);
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2,    "%s", line);
    mvwprintw(stdscr, (row/2),   (col - strlen(line_1))/2,  "%s", line_1);
    mvwprintw(stdscr, (row/2)+1, (col - strlen(line_2))/2,  "%s", line_2);
    mvwprintw(stdscr, (row/2)+2, (col - strlen(line_3))/2,  "%s", line_3);
    refresh();
    msleep(300);


    clear();
    refresh();
    line_n4 = "  #####      #####      #####      #####  ";
    line_n3 = " #     #    #     #    #     #    #     # ";
    line_n2 = "#       #  #       #  #       #  #       #";
    line_n1 = " #     #   #       #  #       #   #     # ";
    line =    "  #####    #       #  #       #    #####  ";
    line_1 =  " #     #   #       #  #       #   #     # ";
    line_2 =  "#       #  #       #  #       #  #       #";
    line_3 =  " #     #    #     #    #     #    #     # ";
    line_4 =  "  #####      #####      #####      #####  ";
    mvwprintw(stdscr, (row/2)-5, (col - strlen(line_n4))/2, "%s", line_n4);
    mvwprintw(stdscr, (row/2)-4, (col - strlen(line_n3))/2, "%s", line_n3);
    mvwprintw(stdscr, (row/2)-3, (col - strlen(line_n2))/2, "%s", line_n2);
    mvwprintw(stdscr, (row/2)-2, (col - strlen(line_n1))/2, "%s", line_n1);
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2,    "%s", line);
    mvwprintw(stdscr, (row/2),   (col - strlen(line_1))/2,  "%s", line_1);
    mvwprintw(stdscr, (row/2)+1, (col - strlen(line_2))/2,  "%s", line_2);
    mvwprintw(stdscr, (row/2)+2, (col - strlen(line_3))/2,  "%s", line_3);
    mvwprintw(stdscr, (row/2)+3, (col - strlen(line_4))/2,  "%s", line_4);
    refresh();
    msleep(300);


    clear();
    refresh();
    line_n4 = "         ######      ######      ######      ######         ";
    line_n3 = "        ##    ##    ##    ##    ##    ##    ##    ##        ";
    line_n2 = "       ##      ##  ##      ##  ##      ##  ##      ##       ";
    line_n1 = "        ##    ##   ##      ##  ##      ##   ##    ##        ";
    line =    "         ######    ##      ##  ##      ##    ######         ";
    line_1 =  "        ##    ##   ##      ##  ##      ##   ##    ##        ";
    line_2 =  "       ##      ##  ##      ##  ##      ##  ##      ##       ";
    line_3 =  "        ##    ##    ##    ##    ##    ##    ##    ##        ";
    line_4 =  "         ######      ######      ######      ######         ";
    mvwprintw(stdscr, (row/2)-5, (col - strlen(line_n4))/2, "%s", line_n4);
    mvwprintw(stdscr, (row/2)-4, (col - strlen(line_n3))/2, "%s", line_n3);
    mvwprintw(stdscr, (row/2)-3, (col - strlen(line_n2))/2, "%s", line_n2);
    mvwprintw(stdscr, (row/2)-2, (col - strlen(line_n1))/2, "%s", line_n1);
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2,    "%s", line);
    mvwprintw(stdscr, (row/2),   (col - strlen(line_1))/2,  "%s", line_1);
    mvwprintw(stdscr, (row/2)+1, (col - strlen(line_2))/2,  "%s", line_2);
    mvwprintw(stdscr, (row/2)+2, (col - strlen(line_3))/2,  "%s", line_3);
    mvwprintw(stdscr, (row/2)+3, (col - strlen(line_4))/2,  "%s", line_4);
    refresh();
    msleep(300);

    msleep(700);


    clear();
    refresh();
    line_7 =  " ---                                                        ";
    line_8 =  "    |                                                       ";
    line_9 =  "     --                                                     ";
    mvwprintw(stdscr, (row/2)-5, (col - strlen(line_n4))/2, "%s", line_n4);
    mvwprintw(stdscr, (row/2)-4, (col - strlen(line_n3))/2, "%s", line_n3);
    mvwprintw(stdscr, (row/2)-3, (col - strlen(line_n2))/2, "%s", line_n2);
    mvwprintw(stdscr, (row/2)-2, (col - strlen(line_n1))/2, "%s", line_n1);
    mvwprintw(stdscr, (row/2)-1, (col - strlen(line))/2,    "%s", line);
    mvwprintw(stdscr, (row/2),   (col - strlen(line_1))/2,  "%s", line_1);
    mvwprintw(stdscr, (row/2)+1, (col - strlen(line_2))/2,  "%s", line_2);
    mvwprintw(stdscr, (row/2)+2, (col - strlen(line_3))/2,  "%s", line_3);
    mvwprintw(stdscr, (row/2)+3, (col - strlen(line_4))/2,  "%s", line_4);

    mvwprintw(stdscr, (row/2)+6, (col - strlen(line_7))/2,  "%s", line_7);
    mvwprintw(stdscr, (row/2)+7, (col - strlen(line_8))/2,  "%s", line_8);
    mvwprintw(stdscr, (row/2)+8, (col - strlen(line_9))/2,  "%s", line_9);
    refresh();
    msleep(100);


    clear();
    refresh(); 
    line_6 =  "      1                                                     ";
    line_7 =  " ---                                                        ";
    line_8 =  "    |                                                       ";
    line_9 =  "     --                                                     ";
    line_10 = "    Vdd                                                     ";
    print_8008( ); 
    refresh();  
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line_6 =  "      1                                                     ";
    line_7 =  " ---    --                                                  ";
    line_8 =  "    |  |  |                                                 ";
    line_9 =  "     --    --                                               ";
    line_10 = "    Vdd                                                     ";
    print_8008( ); 
    refresh();  
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line_6 =  "      1     2                                               ";
    line_7 =  " ---    --                                                  ";
    line_8 =  "    |  |  |                                                 ";
    line_9 =  "     --    --                                               ";
    line_10 = "    Vdd    D7                                               ";
    print_8008( ); 
    refresh();  
    msleep(100) ; 
      
  
    clear();  
    refresh();  
    line_6 =  "      1     2                                               ";
    line_7 =  " ---    --    --                                            ";
    line_8 =  "    |  |  |  |  |                                           ";
    line_9 =  "     --    --    --                                         ";
    line_10 = "    Vdd    D7                                               ";
    print_8008( ); 
    refresh();  
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line_6 =  "      1     2     3                                         ";
    line_7 =  " ---    --    --                                            ";
    line_8 =  "    |  |  |  |  |                                           ";
    line_9 =  "     --    --    --                                         ";
    line_10 = "    Vdd    D7    D6                                         ";
    print_8008( ); 
    refresh();  
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line_6 =  "      1     2     3                                         ";
    line_7 =  " ---    --    --    --                                      ";
    line_8 =  "    |  |  |  |  |  |  |                                     ";
    line_9 =  "     --    --    --    --                                   ";
    line_10 = "    Vdd    D7    D6                                         ";
    print_8008( ); 
    refresh();  
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line_6 =  "      1     2     3     4                                   ";
    line_7 =  " ---    --    --    --                                      ";
    line_8 =  "    |  |  |  |  |  |  |                                     ";
    line_9 =  "     --    --    --    --                                   ";
    line_10 = "    Vdd    D7    D6    D5                                   ";
    print_8008( ); 
    refresh();  
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line_6 =  "      1     2     3     4                                   ";
    line_7 =  " ---    --    --    --    --                                ";
    line_8 =  "    |  |  |  |  |  |  |  |  |                               ";
    line_9 =  "     --    --    --    --    --                             ";
    line_10 = "    Vdd    D7    D6    D5                                   ";
    print_8008( ); 
    refresh();  
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line_6 =  "      1     2     3     4     5                             ";
    line_7 =  " ---    --    --    --    --                                ";
    line_8 =  "    |  |  |  |  |  |  |  |  |                               ";
    line_9 =  "     --    --    --    --    --                             ";
    line_10 = "    Vdd    D7    D6    D5    D4                             ";
    print_8008( ); 
    refresh();  
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line_6 =  "      1     2     3     4     5                             ";
    line_7 =  " ---    --    --    --    --    --                          ";
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |                         ";
    line_9 =  "     --    --    --    --    --    --                       ";
    line_10 = "    Vdd    D7    D6    D5    D4                             ";
    print_8008( ); 
    refresh();  
    msleep(100) ; 
      
  
    clear();  
    refresh();  
    line_6 =  "      1     2     3     4     5     6                       ";
    line_7 =  " ---    --    --    --    --    --                          ";
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |                         ";
    line_9 =  "     --    --    --    --    --    --                       ";
    line_10 = "    Vdd    D7    D6    D5    D4    D3                       ";
    print_8008( ); 
    refresh(); 
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line_6 =  "      1     2     3     4     5     6                       ";
    line_7 =  " ---    --    --    --    --    --    --                    ";
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |  |  |                   ";
    line_9 =  "     --    --    --    --    --    --    --                 ";
    line_10 = "    Vdd    D7    D6    D5    D4    D3                       ";
    print_8008( );
    refresh(); 
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line_6 =  "      1     2     3     4     5     6     7                 ";
    line_7 =  " ---    --    --    --    --    --    --                    ";
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |  |  |                   ";
    line_9 =  "     --    --    --    --    --    --    --                 ";
    line_10 = "    Vdd    D7    D6    D5    D4    D3    D2                 ";
    print_8008( );
    refresh(); 
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line_6 =  "      1     2     3     4     5     6     7                 ";
    line_7 =  " ---    --    --    --    --    --    --    --              ";
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |             ";
    line_9 =  "     --    --    --    --    --    --    --    --           ";
    line_10 = "    Vdd    D7    D6    D5    D4    D3    D2                 ";
    print_8008( );
    refresh(); 
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line_6 =  "      1     2     3     4     5     6     7     8           ";
    line_7 =  " ---    --    --    --    --    --    --    --              ";
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |             ";
    line_9 =  "     --    --    --    --    --    --    --    --           ";
    line_10 = "    Vdd    D7    D6    D5    D4    D3    D2    D1           ";
    print_8008( );
    refresh(); 
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line_6 =  "      1     2     3     4     5     6     7     8           ";
    line_7 =  " ---    --    --    --    --    --    --    --    --        ";
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |       ";
    line_9 =  "     --    --    --    --    --    --    --    --    --     ";
    line_10 = "    Vdd    D7    D6    D5    D4    D3    D2    D1           ";
    print_8008( );
    refresh(); 
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line_6 =  "      1     2     3     4     5     6     7     8     9     ";
    line_7 =  " ---    --    --    --    --    --    --    --    --        ";
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |       ";
    line_9 =  "     --    --    --    --    --    --    --    --    --     ";
    line_10 = "    Vdd    D7    D6    D5    D4    D3    D2    D1    D0     ";
    print_8008( );
    refresh(); 
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line_n6 = "                                                           |";
    line_n5 = "                                                           |";
    line_n4 = "         ######      ######      ######      ######        |";
    line_n3 = "        ##    ##    ##    ##    ##    ##    ##    ##       |";
    line_n2 = "       ##      ##  ##      ##  ##      ##  ##      ##      |";
    line_n1 = "        ##    ##   ##      ##  ##      ##   ##    ##       |";
    line =    "         ######    ##      ##  ##      ##    ######        |";
    line_1 =  "        ##    ##   ##      ##  ##      ##   ##    ##       |";
    line_2 =  "       ##      ##  ##      ##  ##      ##  ##      ##      |";
    line_3 =  "        ##    ##    ##    ##    ##    ##    ##    ##       |";
    line_4 =  "         ######      ######      ######      ######        |";
    line_5 =  "                                                           |";
    line_6 =  "      1     2     3     4     5     6     7     8     9    |";
    line_7 =  " ---    --    --    --    --    --    --    --    --    --- ";
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line_9 =  "     --    --    --    --    --    --    --    --    --     ";
    line_10 = "    Vdd    D7    D6    D5    D4    D3    D2    D1    D0     ";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n9 = "                                                     --     ";
    line_n8 = "                                                       |    ";
    line_n7 = "                                                        --- ";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                                                    Vcc     "; 
    line_n9 = "                                                     --     ";
    line_n8 = "                                                       |    ";
    line_n7 = "                                                        --- ";
    line_n6 = "                                                     10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                                                    Vcc     "; 
    line_n9 = "                                               --    --     ";
    line_n8 = "                                                 |  |  |    ";
    line_n7 = "                                                  --    --- ";
    line_n6 = "                                                     10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                                               S2   Vcc     "; 
    line_n9 = "                                               --    --     ";
    line_n8 = "                                                 |  |  |    ";
    line_n7 = "                                                  --    --- ";
    line_n6 = "                                               11    10    |";
    print_8008_();
    refresh();
    msleep(100);
    

    clear();
    refresh();
    line_n10= "                                               S2   Vcc     "; 
    line_n9 = "                                         --    --    --     ";
    line_n8 = "                                           |  |  |  |  |    ";
    line_n7 = "                                            --    --    --- ";
    line_n6 = "                                               11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                                         S1    S2   Vcc     "; 
    line_n9 = "                                         --    --    --     ";
    line_n8 = "                                           |  |  |  |  |    ";
    line_n7 = "                                            --    --    --- ";
    line_n6 = "                                         12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                                         S1    S2   Vcc     "; 
    line_n9 = "                                   --    --    --    --     ";
    line_n8 = "                                     |  |  |  |  |  |  |    ";
    line_n7 = "                                      --    --    --    --- ";
    line_n6 = "                                         12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                                   S0    S1    S2   Vcc     "; 
    line_n9 = "                                   --    --    --    --     ";
    line_n8 = "                                     |  |  |  |  |  |  |    ";
    line_n7 = "                                      --    --    --    --- ";
    line_n6 = "                                   13    12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                                   S0    S1    S2   Vcc     "; 
    line_n9 = "                             --    --    --    --    --     ";
    line_n8 = "                               |  |  |  |  |  |  |  |  |    ";
    line_n7 = "                                --    --    --    --    --- ";
    line_n6 = "                                   13    12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                            SYNC   S0    S1    S2   Vcc     "; 
    line_n9 = "                             --    --    --    --    --     ";
    line_n8 = "                               |  |  |  |  |  |  |  |  |    ";
    line_n7 = "                                --    --    --    --    --- ";
    line_n6 = "                             14    13    12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                            SYNC   S0    S1    S2   Vcc     "; 
    line_n9 = "                       --    --    --    --    --    --     ";
    line_n8 = "                         |  |  |  |  |  |  |  |  |  |  |    ";
    line_n7 = "                          --    --    --    --    --    --- ";
    line_n6 = "                             14    13    12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                       t2   SYNC   S0    S1    S2   Vcc     "; 
    line_n9 = "                       --    --    --    --    --    --     ";
    line_n8 = "                         |  |  |  |  |  |  |  |  |  |  |    ";
    line_n7 = "                          --    --    --    --    --    --- ";
    line_n6 = "                       15    14    13    12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                       t2   SYNC   S0    S1    S2   Vcc     "; 
    line_n9 = "                 --    --    --    --    --    --    --     ";
    line_n8 = "                   |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line_n7 = "                    --    --    --    --    --    --    --- ";
    line_n6 = "                       15    14    13    12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                 t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line_n9 = "                 --    --    --    --    --    --    --     ";
    line_n8 = "                   |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line_n7 = "                    --    --    --    --    --    --    --- ";
    line_n6 = "                 16    15    14    13    12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "                 t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line_n9 = "           --    --    --    --    --    --    --    --     ";
    line_n8 = "             |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line_n7 = "              --    --    --    --    --    --    --    --- ";
    line_n6 = "                 16    15    14    13    12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "          READY  t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line_n9 = "           --    --    --    --    --    --    --    --     ";
    line_n8 = "             |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line_n7 = "              --    --    --    --    --    --    --    --- ";
    line_n6 = "                 16    15    14    13    12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);


    clear();
    refresh();
    line_n10= "    INT   READY  t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line_n9 = "     --    --    --    --    --    --    --    --    --     ";
    line_n8 = "       |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line_n7 = "        --    --    --    --    --    --    --    --    --- ";
    line_n6 = "                 16    15    14    13    12    11    10    |";
    print_8008_();
    refresh();
    msleep(100);

    clear();
    refresh();
    line_n10= "    INT   READY  t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line_n9 = "     --    --    --    --    --    --    --    --    --     ";
    line_n8 = "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line_n7 = " ---    --    --    --    --    --    --    --    --    --- ";
    line_n6 = "|                16    15    14    13    12    11    10    |";
    line_n5 = "|                                                          |";
    line_n4 = "|        ######      ######      ######      ######        |";
    line_n3 = "|       ##    ##    ##    ##    ##    ##    ##    ##       |";
    line_n2 = " ---   ##      ##  ##      ##  ##      ##  ##      ##      |";
    line_n1 = "    |   ##    ##   ##      ##  ##      ##   ##    ##       |";
    line =    "    |    ######    ##      ##  ##      ##    ######        |";
    line_1 =  "    |   ##    ##   ##      ##  ##      ##   ##    ##       |";
    line_2 =  " ---   ##      ##  ##      ##  ##      ##  ##      ##      |";
    line_3 =  "|       ##    ##    ##    ##    ##    ##    ##    ##       |";
    line_4 =  "|        ######      ######      ######      ######        |";
    line_5 =  "|                                                          |";
    line_6 =  "|     1     2     3     4     5     6     7     8     9    |";
    line_7 =  " ---    --    --    --    --    --    --    --    --    --- ";
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line_9 =  "     --    --    --    --    --    --    --    --    --     ";
    line_10 = "    Vdd    D7    D6    D5    D4    D3    D2    D1    D0     ";
    print_8008_();
    refresh();
    msleep(1000);




    clear();
    refresh();
    print_info();
    refresh();
    msleep(300);


    clear();
    refresh();
    line_n10 = "    INT   READY  t1    t2   SYNC   S0    S1    S2   Vcc     \t\t\t\t\t\t\t\t  INTeL CORPORATION";
    print_info();
    refresh();
    msleep(300);


    clear();
    refresh();
    line_n6 = "|                16    15    14    13    12    11    10    |\t\t\t\t\t\t * 8 Bit Parallel CPU on a Single Chip";
    print_info();
    refresh();
    msleep(300);

    clear();
    refresh();
    line_n4 = "|        ######      ######      ######      ######        |\t\t\t\t\t\t * 48 Instructions, Data Oriented";
    print_info();
    refresh();
    msleep(300);

    clear();
    refresh();
    line_n2 = " ---   ##      ##  ##      ##  ##      ##  ##      ##      |\t\t\t\t\t\t * Complete Instruction Decoding and Control Included";
    print_info();
    refresh();
    msleep(300);

    clear();
    refresh();
    line =    "    |    ######    ##      ##  ##      ##    ######        |\t\t\t\t\t\t * Instruction Cycle Time - 20 us";
    print_info();
    refresh();
    msleep(300);

    clear();
    refresh();
    line_2 =  " ---   ##      ##  ##      ##  ##      ##  ##      ##      |\t\t\t\t\t\t * TTL Compatible";
    print_info();
    refresh();
    msleep(300);

    clear();
    refresh();
    line_4 =  "|        ######      ######      ######      ######        |\t\t\t\t\t\t * Directly addresses 16K x 8 bit of memory (RAM. ROM or S.R.)";
    print_info();
    refresh();
    msleep(300);

    clear();
    refresh();
    line_6 =  "|     1     2     3     4     5     6     7     8     9    |\t\t\t\t\t\t * Contains seven 8-bit registers";
    print_info();
    refresh();
    msleep(300);

    clear();
    refresh();
    line_8 =  "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    \t\t\t\t\t\t * Interrupt Capability";
    print_info();
    refresh();
    msleep(300);

    clear();
    refresh();
    line_10 =  "    Vdd    D7    D6    D5    D4    D3    D2    D1    D0     \t\t\t\t\t\t * Packaged in 18-Pin DIP";
    print_info();
    refresh();
    msleep(300);

    mvwprintw(stdscr, 27, 71, "\t\t\t\t\t\t * Address stack contains 8 14-bit registers");
    mvwprintw(stdscr, 28, 71, "\t\t\t\t\t\t   including program counter");
    refresh();
    msleep(300);

    attron(COLOR_PAIR(MY_PAIR));
    mvwprintw(stdscr, 45, 10, " by Zlo ");
    refresh();
    attroff(COLOR_PAIR(MY_PAIR));
    msleep(300);

    mvwprintw(stdscr, 45, 100,  "Press any key... %d, %d" , row, col);
    refresh();



    getch();
} 

void emu_interface() {
    clear();
    refresh();

    

    getch();
}


void tui () {
    initscr();             
    echo();
    raw();
    keypad(stdscr, true);
    start_color();
    getmaxyx(stdscr, row, col);

    intro();
    emu_interface();

    endwin();              
}
