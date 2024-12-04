#include <iostream>
#include <string.h>
#include <string>

using namespace std;



class IfTryDivideOnZero : public exception {
private:
    string message;
public:
    IfTryDivideOnZero(const string& ex) {
        message = ex;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

class LastSymbolIsNotNullTerminator : public exception {
private:
    string message;
public:
    LastSymbolIsNotNullTerminator(const string& ex) {
        message = ex;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

class OutOfRangeException : public exception {
private:
    string message;
public:
    OutOfRangeException(const string& ex) {
        message = ex;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};
    
void main() {
    int arrey[5];
    short index;
    cout << "enter index: " << endl;
    cin >> index;
    char Arrey2[6] = { 'A' , 'l' , 'e' , 'x' , 'e' , 'y' };
    int userNum;
    cout << "enter Num:" << endl;
    cin >> userNum;
    

    try {
        if (index < 0 || index > 5) {
            throw OutOfRangeException("Index Out of range");
        }

    }
    catch (OutOfRangeException ex) {
        cout << ex.what() << endl;
    }
    try {
        if (Arrey2[6] != '\0') {
            throw LastSymbolIsNotNullTerminator("Last symbol is not null terminator");
        }
    }
    catch (LastSymbolIsNotNullTerminator ex) {
        cout << ex.what() << endl ;
    }
    try {
        if (userNum == 0) {
            throw IfTryDivideOnZero("Trying to divide by zero:");
        }
        
    }
    catch (IfTryDivideOnZero ex) {
        cout << ex.what() << endl;
    }
}