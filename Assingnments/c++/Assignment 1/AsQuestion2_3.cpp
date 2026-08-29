#include <iostream>
using namespace std;

int main()
{
    int statusReg = 0b10110001;
    int controlReg = 0b00000000;
    int dataReg = 0b11001010;

    // ------------------------------------------------
    // 1. const int* ptr1
    // Pointer to a CONSTANT integer
    // Value cannot be changed through ptr1
    // Address can be changed
    // ------------------------------------------------

    const int* regPtr1 = &statusReg;

    cout << "Status value: " << *regPtr1 << endl;

    // *regPtr1 = 50;
    // ERROR: Cannot modify the value through const int*

    regPtr1 = &dataReg;   // Allowed: pointer can point somewhere else

    cout << "After repointing: " << *regPtr1 << endl;


    // ------------------------------------------------
    // 2. int* const ptr2
    // CONSTANT POINTER to an integer
    // Value can be changed
    // Address cannot be changed
    // ------------------------------------------------

    int* const regPtr2 = &controlReg;

    *regPtr2 = 25;   // Allowed: changes controlReg

    cout << "Control value: " << *regPtr2 << endl;

    // regPtr2 = &dataReg;
    // ERROR: Cannot change the address because ptr2 is const


    // ------------------------------------------------
    // 3. const int* const ptr3
    // CONSTANT POINTER to a CONSTANT integer
    // Neither value nor address can be changed
    // ------------------------------------------------

    const int* const regPtr3 = &statusReg;

    cout << "Status value using ptr3: " << *regPtr3 << endl;

    // *regPtr3 = 100;
    // ERROR: Cannot change the value

    // regPtr3 = &dataReg;
    // ERROR: Cannot change the address

    return 0;
}