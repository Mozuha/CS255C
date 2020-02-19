/*
 Feb 19, 2020
 Mizuki Hashimoto
 7th edition p387 Ex8.16
 This is a program to solve a maze included from a header file by the right hand rule.
 Change '.' to '*' if passed by. Change '*' to '-' if passed by twice.
 Just need to reach the goal. Does not need to pass by the whole route.
 */

#include "mazelayout3.h" // include header file
#include <iostream>
using namespace std;

int main() {
    int row = startRow;
    int col = startCol;
    char dir = 'n'; // direction heading to: 'n', 'e', 's', 'w'
    maze[row][col] = '*'; // set starting point to '*'

    while (row != endRow || col != endCol) {
        switch (dir) {
            case 'n':
                if (maze[row][col + 1] != '#') { // try to turn right
                    dir = 'e';
                    col++;
                } else if (maze[row - 1][col] != '#') { // try forward
                    dir = 'n';
                    row--;
                } else if (maze[row][col - 1] != '#') { // try left
                    dir = 'w';
                    col--;
                } else { // must turn back
                    dir = 's';
                    row++;
                }
                break;

            case 'e':
                if (maze[row + 1][col] != '#') { // try to turn right
                    dir = 's';
                    row++;
                } else if (maze[row][col + 1] != '#') { // try forward
                    dir = 'e';
                    col++;
                } else if (maze[row - 1][col] != '#') { // try left
                    dir = 'n';
                    row--;
                } else { // must turn back
                    dir = 'w';
                    col--;
                }
                break;

            case 's':
                if (maze[row][col - 1] != '#') { // try to turn right
                    dir = 'w';
                    col--;
                } else if (maze[row + 1][col] != '#') { // try forward
                    dir = 's';
                    row++;
                } else if (maze[row][col + 1] != '#') { // try left
                    dir = 'e';
                    col++;
                } else { // must turn back
                    dir = 'n';
                    row--;
                }
                break;

            case 'w':
                if (maze[row - 1][col] != '#') { // try to turn right
                    dir = 'n';
                    row--;
                } else if (maze[row][col - 1] != '#') { // try forward
                    dir = 'w';
                    col--;
                } else if (maze[row + 1][col] != '#') { // try left
                    dir = 's';
                    row++;
                } else { // must turn back
                    dir = 'e';
                    col++;
                }
                break;;
        }
        if (maze[row][col] == '.')
            maze[row][col] = '*'; // set '.' of currently standing point to '*'
        else if (maze[row][col] == '*')
            maze[row][col] = '-'; // set '*' of currently standing point to '-'
    }

    for (int i = 0; i < 12; i++) { // print resulted maze
        for (int j = 0; j < 12; j++)
            cout << " " << maze[i][j] << " ";
        cout << endl;
    }
}

/*

 #  #  #  #  #  #  #  #  #  #  #  #
 #  .  .  .  #  .  .  #  .  .  .  #
 #  .  #  .  #  .  #  #  .  #  .  #
 #  #  #  .  #  .  *  *  *  #  .  #
 #  .  .  .  .  #  *  #  *  #  .  #
 #  .  #  #  .  #  *  #  *  #  .  #
 #  .  .  #  .  #  *  #  *  #  #  #
 #  #  .  #  .  #  *  #  *  #  *  *
 #  .  *  *  *  *  -  #  *  #  *  #
 #  #  *  #  #  #  -  #  *  #  *  #
 *  *  -  -  *  #  *  #  *  *  *  #
 #  #  #  #  #  #  #  #  #  #  #  #

 */
