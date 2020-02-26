/*
 Feb 25, 2020
 Mizuki Hashimoto
 7th edition p383-384 Ex8.8
 This is a program to learn how the pointer to the array in C++ works.
 Using array subscript notation, pointer/offset notation, pointer/offset notation with the array name as the pointer,
 and pointer subscript notation.
 */

#include <iostream>
using namespace std;

int main() {
  unsigned int values[5] = {2, 4, 6, 8, 10}; // declare an array of type unsigned int with five elements: 2, 4, 6, 8, 10
  const int SIZE = 5; // constant size of array
  unsigned int *vPtr; // declare a pointer points to an object of type unsigned int

  // print elements of array using array subscript notation
  cout << "Initiation Array Declaration" << endl;
  for (int i = 0; i < SIZE; i++) {
    cout << values[i] << endl;
  }
  cout << endl;

  // two separate statements that assign the starting address of array to pointer
  vPtr = values;
  vPtr = &values[0];

  // print elements of array using pointer/offset notation
  cout << "Pointer/offset Notation using pointer name" << endl;
  for (int i = 0; i < SIZE; i++) {
    cout << *(vPtr + i) << endl;
  }
  cout << endl;

  // print elements of array using pointer/offset notation with the array name as the pointer
  cout << "Pointer/offset Notation using array name" << endl;
  for (int i = 0; i < SIZE; i++) {
    cout << *(values + i) << endl;
  }
  cout << endl;

  // print elements of array using pointer subscript notation
  cout << "Display array with subscripting the pointer" << endl;
  for (int i = 0; i < SIZE; i++) {
    cout << vPtr[i] << endl;
  }
  cout << endl;

  cout << "Array Subscript: " << values[4] << endl; // refer to the fifth element of array using array subscript notation
  cout << "Pointer Notation with Array name: " << *(values + 4) << endl; // using pointer/offset notation with the array name as the pointer
  cout << "Pointer Subscript Notation: " << vPtr[4] << endl; // using pointer subscript notation
  cout << "Pointer Notation: " << *(vPtr + 4) << endl; // using pointer/offset notation
  cout << endl;

  cout << "Address referenced by vPtr + 3: " << vPtr + 3 << endl; // address referenced by vPtr + 3
  cout << *(vPtr + 3) << " is found at " << vPtr + 3 << endl; // value stored at the location above
  cout << endl;

  vPtr = &values[4];
  vPtr -= 4;
  cout << *vPtr << " is the value of vPtr -= 4 after reassigning the pointer to the address " << vPtr << endl;
  // vPtr is the address referenced by vPtr -= 4; *vPtr is the value stored at that location
}


/*
Initiation Array Declaration
2
4
6
8
10

Pointer/offset Notation using pointer name
2
4
6
8
10

Pointer/offset Notation using array name
2
4
6
8
10

Display array with subscripting the pointer
2
4
6
8
10

Array Subscript: 10
Pointer Notation with Array name: 10
Pointer Subscript Notation: 10
Pointer Notation: 10

Address referenced by vPtr + 3: 0xffffcbec
8 is found at 0xffffcbec

2 is the value of vPtr -= 4 after reassigning the pointer to the address 0xffffcbe0
 */
