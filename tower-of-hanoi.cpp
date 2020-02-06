/*
 Feb 04, 2020
 Mizuki Hashimoto
 7th edition p276 Ex6.38
 This is the program gets number of disks and name of pegs (start, auxiliary, end), and executes tower of hanoi with the
 precise sequence of peg-to-peg disk transfers. It also counts the number of disk moves.
 */

#include <iostream>
using namespace std;

int tower_of_hanoi(int n, int from, int aux, int to) {
    static int count = 0;
    count++;
    if(n == 1) {
        cout << "Disc " << n << ": Peg " << from << " -> Peg " << to << endl;
    } else {
        tower_of_hanoi(n - 1, from, to, aux);
        cout << "Disc " << n << ": Peg " << from << " -> Peg " << to << endl;
        tower_of_hanoi(n - 1, aux, from, to);
    }
    return count;
}

int main() {
    int n;
    int count = 0;
    cout << "Please enter the number of discs you want to use for Tower of Hanoi: ";
    cin >> n;
    count = tower_of_hanoi(n, 1, 2, 3);
    cout << count << " moves" << endl;
}

/*
Please enter the number of discs you want to use for Tower of Hanoi: 3
Disc 1: Peg 1 -> Peg 3
Disc 2: Peg 1 -> Peg 2
Disc 1: Peg 3 -> Peg 2
Disc 3: Peg 1 -> Peg 3
Disc 1: Peg 2 -> Peg 1
Disc 2: Peg 2 -> Peg 3
Disc 1: Peg 1 -> Peg 3
7 moves

Please enter the number of discs you want to use for Tower of Hanoi: 5
Disc 1: Peg 1 -> Peg 3
Disc 2: Peg 1 -> Peg 2
Disc 1: Peg 3 -> Peg 2
Disc 3: Peg 1 -> Peg 3
Disc 1: Peg 2 -> Peg 1
Disc 2: Peg 2 -> Peg 3
Disc 1: Peg 1 -> Peg 3
Disc 4: Peg 1 -> Peg 2
Disc 1: Peg 3 -> Peg 2
Disc 2: Peg 3 -> Peg 1
Disc 1: Peg 2 -> Peg 1
Disc 3: Peg 3 -> Peg 2
Disc 1: Peg 1 -> Peg 3
Disc 2: Peg 1 -> Peg 2
Disc 1: Peg 3 -> Peg 2
Disc 5: Peg 1 -> Peg 3
Disc 1: Peg 2 -> Peg 1
Disc 2: Peg 2 -> Peg 3
Disc 1: Peg 1 -> Peg 3
Disc 3: Peg 2 -> Peg 1
Disc 1: Peg 3 -> Peg 2
Disc 2: Peg 3 -> Peg 1
Disc 1: Peg 2 -> Peg 1
Disc 4: Peg 2 -> Peg 3
Disc 1: Peg 1 -> Peg 3
Disc 2: Peg 1 -> Peg 2
Disc 1: Peg 3 -> Peg 2
Disc 3: Peg 1 -> Peg 3
Disc 1: Peg 2 -> Peg 1
Disc 2: Peg 2 -> Peg 3
Disc 1: Peg 1 -> Peg 3
31 moves
 */
