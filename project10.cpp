/*
 * Apr 17, 2020
 * Mizuki Hashimoto
 * 7th edition p681 Ex15.6
 * Simple six exercises using cout and cin features of C++
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int var1 = 4444; // for question a
  const int STATE_SIZE = 11; // for question b
  char state[STATE_SIZE]; // for question b
  int var2 = 200; // for question c
  int var3 = 255; // for question d
  char charArray[STATE_SIZE]; // for question e
  double var4 = 1.235; // for question f

  // question a
  cout << "Print integer 4444 left justified in a 13 digit field, surrounded by /" << endl;
  cout << "/" << left << setw(13) << var1 << "/" << endl; // output => /4444         /

  // question b
  cout << "Interactively input a 15 character string into a 10 character array 'state' and then print 'state'" << endl;
  cout << "Input: ";
  cin.get(state, STATE_SIZE); // read input for STATE_SIZE characters and put into state
  cout << state << endl; // output => now is the
  cin.ignore(80, '\n'); // clear rest of input

  // question c
  cout << "Print a variable containing 200 with and without sign on the same line" << endl;
  cout << showpos << var2 << " " << noshowpos << var2 << endl; // output => +200 200

  // question d
  cout << "Print the decimal value 255 in hexadecimal form preceded by 0x" << endl;
  cout << showbase << hex << var3 << endl; // output => 0xff

  // question e
  cout << "Interactively input characters until the character '.' is encountered into array\n"
          "'charArray' of up to 10 characters" << endl;
  cout << "Input: ";
  // read input for STATE_SIZE characters and put into charArray. stop if encountered delimiter
  cin.get(charArray, STATE_SIZE, '.');
  cout << charArray << endl; // output => now
  cin.ignore(80, '\n'); // clear rest of input

  // question f
  cout << "Print 1.235 in a 9 digit field with 2 decimal places and with leading zeroes" << endl;
  cout << right << setw(9) << setfill('0') << setprecision(3) << var4 << endl; // output => 000001.24
}

/*
-----------------output-----------------
Print integer 4444 left justified in a 13 digit field, surrounded by /
/4444         /
Interactively input a 15 character string into a 10 character array 'state' and then print 'state'
Input: now is the time for all people.
now is the
Print a variable containing 200 with and without sign on the same line
+200 200
Print the decimal value 255 in hexadecimal form preceded by 0x
0xff
Interactively input characters until the character '.' is encountered into array
'charArray' of up to 10 characters
Input: now. is. the time
now
Print 1.235 in a 9 digit field with 2 decimal places and with leading zeroes
000001.24
 */
