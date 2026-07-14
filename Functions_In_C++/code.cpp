#include <iostream>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

// function defination
void printHello() { // using void because this func is not returning any value
    cout << "Hello\n";
}

int sum(int a, int b){ // parameters
    int s = a + b;
    return s;
}

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int mult(int a, int b){
    return a*b;
}

int main(){
    // function call / invoke
    printHello(); // Hello

    cout << sum(5, 10) << endl; //15 // arguments
    cout << factorial(5) << endl; // 120

    // pass by value (copy of argument is passed to function)
    int x = 5,  y = 5;
    cout << mult(x, y) << endl; // 25

    return 0;
}