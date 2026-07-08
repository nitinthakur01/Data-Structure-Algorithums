#include <iostream>
// #include <cmath> // for floor()
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    
    // INTRODUCTION TO C++ :

    // 1. sum of two integer

    // int a = 12,  b = 13;
    // cout << a + b; // 25

    // 2. Accept and print the answer

    // int age;
    // cout << "Enter your age";
    // cin >> age;
    // cout << "Your age is : " << age;

    // 3. Swap two variables via 3 methods

    // int a = 5, b = 3;

    // 1. method 
    //  a = a - b; // a = 2
    //  b = a + b; // b = 5
    //  a = b - a; // a = 3
    //  cout << a << endl; // 3
    //  cout << b << endl; // 5

    // 2. method
    //  a = a ^ b; 
    //  b = a ^ b; 
    //  a = a ^ b; 
    //  cout << a << endl; // 3
    //  cout << b << endl; // 5

    // 3. method
    // int temp = a;  // Store a in temp
    // a = b;         // Copy b into a
    // b = temp;      // Copy temp (old a) into b

    // cout << a << endl; // 3
    // cout << b << endl; // 5

    // CONDITIONAL STATEMENTS IN C++ :

    // 1. Valid Voter

    // int age;
    // cout << "Enter your age : ";
    // cin >> age;

    // if(age >= 18) {
    //     cout << "You can vote";
    // }else {
    //     cout << "You can't vote";
    // }

    // 2. Shop Discount

    //     int amount;
    //     int discount = 0;

    //     cout << "Enter your amount: ";
    //     cin >> amount;

    //     if (amount > 0 && amount <= 5000) {
    //         discount = 0;
    //     }
    //     else if (amount > 5000 && amount <= 7000) {
    //         discount = 5;
    //     }
    //     else if (amount > 7000 && amount <= 9000) {
    //         discount = 10;
    //     }
    //     else if (amount > 9000) {
    //         discount = 20;
    //     }

    //     int finalAmount = amount - floor((discount * amount) / 100);
    //     cout << "Final amount after discount: " << finalAmount << endl;

    // LOOPS IN C++ :

    // FOR LOOP :

    // 1. Print 1 to n number

    // int n = 10;

    // for (int i = 1; i <= 10; i++){
    //     cout << i << endl; // 1 to 10
    // }

    // 2. Sum of n natural number

    // int n = 10;
    // int sum = 0;

    // for (int i = 1; i <= 10; i++){
    //     sum = sum + i;
    // }
    // cout << sum << endl; // 55

    // 3. Print odd numbers

    // int n = 5;

    // for (int i = 1; i <= n; i++){
    //     if(i % 2 != 0) {
    //         cout << i << endl; // 1, 3, 5
    //     }
    // }

    // 4. factorial of a number

    // int n = 5;
    // int fact = 1;

    // for (int i = 1; i <= n; i++){
    //     fact = fact * i;
    // }
    // cout << fact << endl; // 120 

    // 5. factors of a number

    // int n = 12;

    // for (int i = 1; i <= n; i++) {
    //     if(n % i == 0) {
    //         cout << i << endl;
    //     }
    // }

    // 6. Prime Number

    // int n;
    // bool isPrime = true;

    // cout << "Enter a number: ";
    // cin >> n;

    // if (n <= 1) {
    // cout << "Not a Prime Number";
    // }
    // for (int i = 2; i < n; i++) {
    //     if (n % i == 0) {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime)
    //     cout << "Prime Number"; // 7
    // else
    //     cout << "Not a Prime Number"; // 10
    
    return 0;
}