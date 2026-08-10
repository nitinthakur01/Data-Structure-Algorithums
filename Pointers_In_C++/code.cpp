#include <iostream>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

void changeRef(int* ptr2) { // pass by reference
    *ptr2 = 20;
}

int main(){
    // POINTERS IN C++ :-

    int a = 10;
    cout << &a << endl; // 0x61ff08
    cout << *(&a) << endl; // 10

    int b = 10;
    int * ptr = &b;
    cout << ptr << endl; // 0x61ff04
    cout << &b << endl; // 0x61ff04

    // NULL Pointer
    int * ptr1 = NULL;
    cout << ptr1 << endl; // 0

    // pass by reference
    int ref = 10;
    changeRef(&ref);

    cout << ref << endl; // 20

    // array pointer
    int arr[] = {1, 2, 3, 4, 5};
    cout << *arr << endl; // 1

    // pointer arithmetic
    int c = 30;
    int *ptr5 = &c;
    cout << ptr5 << endl;
    ptr++;
    cout << ptr5 << endl;

    return 0;
}