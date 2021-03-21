#include "tui.h"
#include <ncurses.h>
#include <string.h>

#define MY_PAIR 1

int row, col;

char *line[22];

void print_t(int y, int x, int amount) {
    if (y >= 0 && x >= 0) {
        for (int i = 0; i < amount; i++) {
            mvwprintw(stdscr, i+y, x, "%s", line[i]);
        }
    }
    else if (y < 0 && x < 0){
        for (int i = 0; i < amount; i++) {
            mvwprintw(stdscr, (row/2)-(amount/2)+i, (col - strlen(line[0]))/2, "%s", line[i]);
        }
    }
    refresh();
}


void print_logo () {
    line[0] = " ---#--#--#--#--#--#--#--#--#--- ";
    line[1] = "|                               |";
    line[2] = "|      ###   ###   ###   ###    |";
    line[3] = " --   #   # #   # #   # #   #   |";
    line[4] = "   |   ###  #   # #   #  ###    |";
    line[5] = " --   #   # #   # #   # #   #   |";
    line[6] = "|      ###   ###   ###   ###    |";
    line[7] = "|                               |";
    line[8] = " ---#--#--#--#--#--#--#--#--#--- ";
    print_t(3, 7, 9);

    refresh();
}


void print_CPU(){
    line[0]  = " ---8008 CPU:--------------------------------------------------------------- "; 
    line[1]  = "|                                                                           |";
    line[2]  = "|      DATA BUS BUFFER:        INSTRUCTION                                  |";
    line[3]  = "|     [0 0 0 0  0 0 0 0]       REGISTER: 00                                 |";
    line[4]  = "|         |        |                  |                                     |";
    line[5]  = "|         V        V                  V                                     |";
    line[6]  = "|  ====================================================================     |";
    line[7]  = "|  ^     |           |                |                         |           |";
    line[8]  = "|  |     V           V                V                         V           |";
    line[9]  = "|  |  REG a: 0   REG b: 0          STACK:                   REGISTERS:      |";
    line[10] = "|  |   |              |       PROGRAM COUNTER: 0000     ACCUMULATOR: 0000   |";
    line[11] = "|  |   |              |       LEVEL NO. 1:     0000     REG B:       0000   |";
    line[12] = "|  |   |-> CARRY: 0 <-|       LEVEL NO. 2:     0000     REG C:       0000   |";
    line[13] = "|  |          |               LEVEL NO. 3:     0000     REG D:       0000   |";
    line[14] = "|  |          V               LEVEL NO. 4:     0000     REG E:       0000   |";
    line[15] = "|  |----<-FLAGS:              LEVEL NO. 5:     0000     REG H:       0000   |";
    line[16] = "|           Z  0              LEVEL NO. 6:     0000     REG L:       0000   |";
    line[17] = "|           C  0              LEVEL NO. 7:     0000                         |";
    line[18] = "|           S  0                                                            |";
    line[19] = "|           P  0                                                            |";
    line[20] = "|                                                                           |";
    line[21] = " --------------------------------------------------------------------------- ";
    print_t(3, 45, 22);
}

void intro () {
    init_pair(MY_PAIR, COLOR_BLACK, COLOR_WHITE);
    attron(COLOR_PAIR(MY_PAIR));
    line[0] = "                               ";
    line[1] = "    PLEASE MAKE FULL SCREEN    ";
    line[2] = "                              ";
    print_t(-1, -1, 3);
    msleep(2000);   
    attroff(COLOR_PAIR(MY_PAIR));

    clear();
    refresh();
    line[0] = "8008";
    print_t(-1, -1, 1);  
    msleep(300);


    clear();
    refresh();
    line[0] = "8 0 0 8";
    print_t(-1, -1, 1);
    msleep(300);


    clear();
    refresh();
    line[0] = " ___   ___   ___   ___ ";
    line[1] = "/   \\ /   \\ /   \\ /   \\";
    line[2] = "\\___/ |   | |   | \\___/";
    line[3] = "/   \\ |   | |   | /   \\";
    line[4] = "\\___/ \\___/ \\___/ \\___/";
    print_t(-1, -1, 5);
    msleep(300);

    
    clear();
    refresh();
    line[0] = " ###   ###   ###   ### ";
    line[1] = "#   # #   # #   # #   #";
    line[2] = " ###  #   # #   #  ### ";
    line[3] = "#   # #   # #   # #   #";
    line[4] = " ###   ###   ###   ### ";
    print_t(-1, -1, 5);
    msleep(300);


    clear();
    refresh();
    line[0] = " #####   #####   #####   ##### ";
    line[1] = "#     # #     # #     # #     #";
    line[2] = "#     # #     # #     # #     #";
    line[3] = " #####  #     # #     #  ##### ";
    line[4] = "#     # #     # #     # #     #";
    line[5] = "#     # #     # #     # #     #";
    line[6] = " #####   #####   #####   ##### ";
    print_t(-1, -1, 7);
    msleep(300);


    clear();
    refresh();
    line[0] = "  #####      #####      #####      #####  ";
    line[1] = " #     #    #     #    #     #    #     # ";
    line[2] = "#       #  #       #  #       #  #       #";
    line[3] = " #     #   #       #  #       #   #     # ";
    line[4] = "  #####    #       #  #       #    #####  ";
    line[5] = " #     #   #       #  #       #   #     # ";
    line[6] = "#       #  #       #  #       #  #       #";
    line[7] = " #     #    #     #    #     #    #     # ";
    line[8] = "  #####      #####      #####      #####  ";
    print_t(-1, -1, 9);
    msleep(300);


    clear();
    refresh();
    line[0] = "         ######      ######      ######      ######         ";
    line[1] = "        ##    ##    ##    ##    ##    ##    ##    ##        ";
    line[2] = "       ##      ##  ##      ##  ##      ##  ##      ##       ";
    line[3] = "        ##    ##   ##      ##  ##      ##   ##    ##        ";
    line[4] = "         ######    ##      ##  ##      ##    ######         ";
    line[5] = "        ##    ##   ##      ##  ##      ##   ##    ##        ";
    line[6] = "       ##      ##  ##      ##  ##      ##  ##      ##       ";
    line[7] = "        ##    ##    ##    ##    ##    ##    ##    ##        ";
    line[8] = "         ######      ######      ######      ######         ";
    print_t(-1, -1, 9);
    msleep(300);

    msleep(700);


    clear();
    refresh();
    line[0] =  "                                                            "; 
    line[1] =  "                                                            ";
    line[2] =  "                                                            ";
    line[3] =  "                                                            ";
    line[4] =  "                                                            ";
    line[5] =  "                                                            ";
    line[6] =  "         ######      ######      ######      ######         ";
    line[7] =  "        ##    ##    ##    ##    ##    ##    ##    ##        ";
    line[8] =  "       ##      ##  ##      ##  ##      ##  ##      ##       ";
    line[9] =  "        ##    ##   ##      ##  ##      ##   ##    ##        ";
    line[10] = "         ######    ##      ##  ##      ##    ######         ";
    line[11] = "        ##    ##   ##      ##  ##      ##   ##    ##        ";
    line[12] = "       ##      ##  ##      ##  ##      ##  ##      ##       ";
    line[13] = "        ##    ##    ##    ##    ##    ##    ##    ##        ";
    line[14] = "         ######      ######      ######      ######         ";
    line[15] = "                                                            ";
    line[16] = "                                                            ";
    line[17] = " ---                                                        ";
    line[18] = "    |                                                       ";
    line[19] = "     --                                                     ";
    line[20] = "                                                            ";                                                           
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh(); 
    line[16] = "      1                                                     ";
    line[17] = " ---                                                        ";
    line[18] = "    |                                                       ";
    line[19] = "     --                                                     ";
    line[20] = "    Vdd                                                     ";  
    print_t(-1, -1, 21);
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line[16] = "      1                                                     ";
    line[17] = " ---    --                                                  ";
    line[18] = "    |  |  |                                                 ";
    line[19] = "     --    --                                               ";
    line[20] = "    Vdd                                                     ";
    print_t(-1, -1, 21); 
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line[16] = "      1     2                                               ";
    line[17] = " ---    --                                                  ";
    line[18] = "    |  |  |                                                 ";
    line[19] = "     --    --                                               ";
    line[20] = "    Vdd    D7                                               ";
    print_t(-1, -1, 21); 
    msleep(100) ; 
      
  
    clear();  
    refresh();  
    line[16] = "      1     2                                               ";
    line[17] = " ---    --    --                                            ";
    line[18] = "    |  |  |  |  |                                           ";
    line[19] = "     --    --    --                                         ";
    line[20] = "    Vdd    D7                                               ";
    print_t(-1, -1, 21); 
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line[16] = "      1     2     3                                         ";
    line[17] = " ---    --    --                                            ";
    line[18] = "    |  |  |  |  |                                           ";
    line[19] = "     --    --    --                                         ";
    line[20] = "    Vdd    D7    D6                                         ";
    print_t(-1, -1, 21);  
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line[16] = "      1     2     3                                         ";
    line[17] = " ---    --    --    --                                      ";
    line[18] = "    |  |  |  |  |  |  |                                     ";
    line[19] = "     --    --    --    --                                   ";
    line[20] = "    Vdd    D7    D6                                         ";
    print_t(-1, -1, 21); 
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line[16] = "      1     2     3     4                                   ";
    line[17] = " ---    --    --    --                                      ";
    line[18] = "    |  |  |  |  |  |  |                                     ";
    line[19] = "     --    --    --    --                                   ";
    line[20] = "    Vdd    D7    D6    D5                                   ";
    print_t(-1, -1, 21); 
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line[16] = "      1     2     3     4                                   ";
    line[17] = " ---    --    --    --    --                                ";
    line[18] = "    |  |  |  |  |  |  |  |  |                               ";
    line[19] = "     --    --    --    --    --                             ";
    line[20] = "    Vdd    D7    D6    D5                                   ";
    print_t(-1, -1, 21);
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line[16] = "      1     2     3     4     5                             ";
    line[17] = " ---    --    --    --    --                                ";
    line[18] = "    |  |  |  |  |  |  |  |  |                               ";
    line[19] = "     --    --    --    --    --                             ";
    line[20] = "    Vdd    D7    D6    D5    D4                             ";
    print_t(-1, -1, 21);
    msleep(100) ; 
  
  
    clear();  
    refresh();  
    line[16] = "      1     2     3     4     5                             ";
    line[17] = " ---    --    --    --    --    --                          ";
    line[18] = "    |  |  |  |  |  |  |  |  |  |  |                         ";
    line[19] = "     --    --    --    --    --    --                       ";
    line[20] = "    Vdd    D7    D6    D5    D4                             ";
    print_t(-1, -1, 21); 
    msleep(100) ; 
      
  
    clear();  
    refresh();  
    line[16] = "      1     2     3     4     5     6                       ";
    line[17] = " ---    --    --    --    --    --                          ";
    line[18] = "    |  |  |  |  |  |  |  |  |  |  |                         ";
    line[19] = "     --    --    --    --    --    --                       ";
    line[20] = "    Vdd    D7    D6    D5    D4    D3                       ";
    print_t(-1, -1, 21);
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line[16] = "      1     2     3     4     5     6                       ";
    line[17] = " ---    --    --    --    --    --    --                    ";
    line[18] = "    |  |  |  |  |  |  |  |  |  |  |  |  |                   ";
    line[19] = "     --    --    --    --    --    --    --                 ";
    line[20] = "    Vdd    D7    D6    D5    D4    D3                       ";
    print_t(-1, -1, 21);
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line[16] = "      1     2     3     4     5     6     7                 ";
    line[17] = " ---    --    --    --    --    --    --                    ";
    line[18] = "    |  |  |  |  |  |  |  |  |  |  |  |  |                   ";
    line[19] = "     --    --    --    --    --    --    --                 ";
    line[20] = "    Vdd    D7    D6    D5    D4    D3    D2                 ";
    print_t(-1, -1, 21);
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line[16] = "      1     2     3     4     5     6     7                 ";
    line[17] = " ---    --    --    --    --    --    --    --              ";
    line[18] = "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |             ";
    line[19] = "     --    --    --    --    --    --    --    --           ";
    line[20] = "    Vdd    D7    D6    D5    D4    D3    D2                 ";
    print_t(-1, -1, 21);
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line[16] = "      1     2     3     4     5     6     7     8           ";
    line[17] = " ---    --    --    --    --    --    --    --              ";
    line[18] = "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |             ";
    line[19] = "     --    --    --    --    --    --    --    --           ";
    line[20] = "    Vdd    D7    D6    D5    D4    D3    D2    D1           ";
    print_t(-1, -1, 21); 
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line[16] = "      1     2     3     4     5     6     7     8           ";
    line[17] = " ---    --    --    --    --    --    --    --    --        ";
    line[18] = "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |       ";
    line[19] = "     --    --    --    --    --    --    --    --    --     ";
    line[20] = "    Vdd    D7    D6    D5    D4    D3    D2    D1           ";
    print_t(-1, -1, 21);
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line[16] = "      1     2     3     4     5     6     7     8     9     ";
    line[17] = " ---    --    --    --    --    --    --    --    --        ";
    line[18] = "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |       ";
    line[19] = "     --    --    --    --    --    --    --    --    --     ";
    line[20] = "    Vdd    D7    D6    D5    D4    D3    D2    D1    D0     ";
    print_t(-1, -1, 21);
    msleep(100) ;
 
 
    clear(); 
    refresh(); 
    line[4] =  "                                                           |";
    line[5] =  "                                                           |";
    line[6] =  "         ######      ######      ######      ######        |";
    line[7] =  "        ##    ##    ##    ##    ##    ##    ##    ##       |";
    line[8] =  "       ##      ##  ##      ##  ##      ##  ##      ##      |";
    line[9] =  "        ##    ##   ##      ##  ##      ##   ##    ##       |";
    line[10] = "         ######    ##      ##  ##      ##    ######        |";
    line[11] = "        ##    ##   ##      ##  ##      ##   ##    ##       |";
    line[12] = "       ##      ##  ##      ##  ##      ##  ##      ##      |";
    line[13] = "        ##    ##    ##    ##    ##    ##    ##    ##       |";
    line[14] = "         ######      ######      ######      ######        |";
    line[15] = "                                                           |";
    line[16] = "      1     2     3     4     5     6     7     8     9    |";
    line[17] = " ---    --    --    --    --    --    --    --    --    --- ";
    line[18] = "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line[19] = "     --    --    --    --    --    --    --    --    --     ";
    line[20] = "    Vdd    D7    D6    D5    D4    D3    D2    D1    D0     ";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] =  "                                                            "; 
    line[1] =  "                                                     --     ";
    line[2] =  "                                                       |    ";
    line[3] =  "                                                        --- ";
    line[4] =  "                                                           |";
    print_t(-1,-1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                                                    Vcc     "; 
    line[1] = "                                                     --     ";
    line[2] = "                                                       |    ";
    line[3] = "                                                        --- ";
    line[4] = "                                                     10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                                                    Vcc     "; 
    line[1] = "                                               --    --     ";
    line[2] = "                                                 |  |  |    ";
    line[3] = "                                                  --    --- ";
    line[4] = "                                                     10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                                               S2   Vcc     "; 
    line[1] = "                                               --    --     ";
    line[2] = "                                                 |  |  |    ";
    line[3] = "                                                  --    --- ";
    line[4] = "                                               11    10    |";
    print_t(-1, -1, 21);
    msleep(100);
    

    clear();
    refresh();
    line[0] = "                                               S2   Vcc     "; 
    line[1] = "                                         --    --    --     ";
    line[2] = "                                           |  |  |  |  |    ";
    line[3] = "                                            --    --    --- ";
    line[4] = "                                               11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                                         S1    S2   Vcc     "; 
    line[1] = "                                         --    --    --     ";
    line[2] = "                                           |  |  |  |  |    ";
    line[3] = "                                            --    --    --- ";
    line[4] = "                                         12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                                         S1    S2   Vcc     "; 
    line[1] = "                                   --    --    --    --     ";
    line[2] = "                                     |  |  |  |  |  |  |    ";
    line[3] = "                                      --    --    --    --- ";
    line[4] = "                                         12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                                   S0    S1    S2   Vcc     "; 
    line[1] = "                                   --    --    --    --     ";
    line[2] = "                                     |  |  |  |  |  |  |    ";
    line[3] = "                                      --    --    --    --- ";
    line[4] = "                                   13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                                   S0    S1    S2   Vcc     "; 
    line[1] = "                             --    --    --    --    --     ";
    line[2] = "                               |  |  |  |  |  |  |  |  |    ";
    line[3] = "                                --    --    --    --    --- ";
    line[4] = "                                   13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                            SYNC   S0    S1    S2   Vcc     "; 
    line[1] = "                             --    --    --    --    --     ";
    line[2] = "                               |  |  |  |  |  |  |  |  |    ";
    line[3] = "                                --    --    --    --    --- ";
    line[4] = "                             14    13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                            SYNC   S0    S1    S2   Vcc     "; 
    line[1] = "                       --    --    --    --    --    --     ";
    line[2] = "                         |  |  |  |  |  |  |  |  |  |  |    ";
    line[3] = "                          --    --    --    --    --    --- ";
    line[4] = "                             14    13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                       t2   SYNC   S0    S1    S2   Vcc     "; 
    line[1] = "                       --    --    --    --    --    --     ";
    line[2] = "                         |  |  |  |  |  |  |  |  |  |  |    ";
    line[3] = "                          --    --    --    --    --    --- ";
    line[4] = "                       15    14    13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                       t2   SYNC   S0    S1    S2   Vcc     "; 
    line[1] = "                 --    --    --    --    --    --    --     ";
    line[2] = "                   |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line[3] = "                    --    --    --    --    --    --    --- ";
    line[4] = "                       15    14    13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                 t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line[1] = "                 --    --    --    --    --    --    --     ";
    line[2] = "                   |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line[3] = "                    --    --    --    --    --    --    --- ";
    line[4] = "                 16    15    14    13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "                 t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line[1] = "           --    --    --    --    --    --    --    --     ";
    line[2] = "             |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line[3] = "              --    --    --    --    --    --    --    --- ";
    line[4] = "                 16    15    14    13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "          READY  t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line[1] = "           --    --    --    --    --    --    --    --     ";
    line[2] = "             |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line[3] = "              --    --    --    --    --    --    --    --- ";
    line[4] = "           17    16    15    14    13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);


    clear();
    refresh();
    line[0] = "          READY  t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line[1] = "     --    --    --    --    --    --    --    --    --     ";
    line[2] = "       |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line[3] = "        --    --    --    --    --    --    --    --    --- ";
    line[4] = "           17    16    15    14    13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);

    clear();
    refresh();
    line[0] = "    INT   READY  t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line[1] = "     --    --    --    --    --    --    --    --    --     ";
    line[2] = "       |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line[3] = "        --    --    --    --    --    --    --    --    --- ";
    line[4] = "     18    17    16    15    14    13    12    11    10    |";
    print_t(-1, -1, 21);
    msleep(100);

    clear();
    refresh();
    line[0] = "    INT   READY  t1    t2   SYNC   S0    S1    S2   Vcc     "; 
    line[1] = "     --    --    --    --    --    --    --    --    --     ";
    line[2] = "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line[3] = " ---    --    --    --    --    --    --    --    --    --- ";
    line[4] = "|    18    17    16    15    14    13    12    11    10    |";
    line[5] = "|                                                          |";
    line[6] = "|        ######      ######      ######      ######        |";
    line[7] = "|       ##    ##    ##    ##    ##    ##    ##    ##       |";
    line[8] = " ---   ##      ##  ##      ##  ##      ##  ##      ##      |";
    line[9] = "    |   ##    ##   ##      ##  ##      ##   ##    ##       |";
    line[10] ="    |    ######    ##      ##  ##      ##    ######        |";
    line[11] ="    |   ##    ##   ##      ##  ##      ##   ##    ##       |";
    line[12] =" ---   ##      ##  ##      ##  ##      ##  ##      ##      |";
    line[13] ="|       ##    ##    ##    ##    ##    ##    ##    ##       |";
    line[14] ="|        ######      ######      ######      ######        |";
    line[15] ="|                                                          |";
    line[16] ="|     1     2     3     4     5     6     7     8     9    |";
    line[17] =" ---    --    --    --    --    --    --    --    --    --- ";
    line[18] ="    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    ";
    line[19] ="     --    --    --    --    --    --    --    --    --     ";
    line[20] ="    Vdd    D7    D6    D5    D4    D3    D2    D1    D0     ";
    print_t(-1, -1, 21);
    msleep(1000);




    clear();
    refresh();
    print_t(5, 10, 21);
    msleep(300);


    clear();
    refresh();
    line[0] = "    INT   READY  t1    t2   SYNC   S0    S1    S2   Vcc     \t\t\t\t\t\t\t\t  INTeL CORPORATION";
    print_t(5, 10, 21);
    msleep(300);


    clear();
    refresh();
    line[4] = "|    18    17    16    15    14    13    12    11    10    |\t\t\t\t\t\t * 8 Bit Parallel CPU on a Single Chip";
    print_t(5, 10, 21);
    msleep(300);

    clear();
    refresh();
    line[6] = "|        ######      ######      ######      ######        |\t\t\t\t\t\t * 48 Instructions, Data Oriented";
    print_t(5, 10, 21);
    msleep(300);

    clear();
    refresh();
    line[8] = " ---   ##      ##  ##      ##  ##      ##  ##      ##      |\t\t\t\t\t\t * Complete Instruction Decoding and Control Included";
    print_t(5, 10, 21);
    msleep(300);

    clear();
    refresh();
    line[10] =    "    |    ######    ##      ##  ##      ##    ######        |\t\t\t\t\t\t * Instruction Cycle Time - 20 us";
    print_t(5, 10, 21);
    msleep(300);

    clear();
    refresh();
    line[12] =  " ---   ##      ##  ##      ##  ##      ##  ##      ##      |\t\t\t\t\t\t * TTL Compatible";
    print_t(5, 10, 21);
    msleep(300);

    clear();
    refresh();
    line[14] =  "|        ######      ######      ######      ######        |\t\t\t\t\t\t * Directly addresses 16K x 8 bit of memory (RAM. ROM or S.R.)";
    print_t(5, 10, 21);
    msleep(300);

    clear();
    refresh();
    line[16] =  "|     1     2     3     4     5     6     7     8     9    |\t\t\t\t\t\t * Contains seven 8-bit registers";
    print_t(5, 10, 21);
    msleep(300);

    clear();
    refresh();
    line[18] =  "    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |    \t\t\t\t\t\t * Interrupt Capability";
    print_t(5, 10, 21);
    msleep(300);

    clear();
    refresh();
    line[20] =  "    Vdd    D7    D6    D5    D4    D3    D2    D1    D0     \t\t\t\t\t\t * Packaged in 18-Pin DIP";
    print_t(5, 10, 21);
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

    print_logo();
    print_CPU();


    getch();
}


void tui () {
    initscr();             
    echo();
    raw();
    keypad(stdscr, true);
    start_color();
    getmaxyx(stdscr, row, col);

    intro(); //  fior skipping it in dev time
    emu_interface();

    endwin();              
}
