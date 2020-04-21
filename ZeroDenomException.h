/*
 * Apr 21, 2020
 * Mizuki Hashimoto
 * This is a header file for ZeroDenomException class.
 * Contains prototypes for methods and variables of ZeroDenomException class
 */

// prevent multiple inclusions of header file
#ifndef C_PROJECT_ZERODENOMEXCEPTION_H
#define C_PROJECT_ZERODENOMEXCEPTION_H

#include <stdexcept>
using namespace std;

// ZeroDenomException class definition
class ZeroDenomException : public runtime_error { // ZeroDenomException class inherits runtime_error class
  public:
    ZeroDenomException() : runtime_error("") {} // ZeroDenomException as runtime error
};

#endif //C_PROJECT_ZERODENOMEXCEPTION_H
