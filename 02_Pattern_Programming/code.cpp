#include <iostream>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main(){
    // PATTERN PROGRAMMING :-

    // NESTED LOOP
    int n = 10;
    for (int i = 1; i <= n; i++){
        int m = 10;
        for (int j = 1; j <= m; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Imp :- Practice to start loop from 0, So we can use this method for upcoming topics like Arrays

    // Square Pattern (With Numbers)
    int n = 4;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n; j++){ 
            cout << j << " ";
        }
        cout << endl;
    }
    // 1 2 3 4 
    // 1 2 3 4 
    // 1 2 3 4 
    // 1 2 3 4 

    // Square Pattern (With Stars)
    int n = 4;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    // * * * * 
    // * * * * 
    // * * * * 
    // * * * * 

    // Square Pattern (With Alphabets)
    int n = 4;
    for (int i = 0; i < n; i++){
        char ch = 'A';
        for (int j = 0; j < n; j++){ // inner start => line start
            cout << ch << " ";  
            ch = ch + 1;
        }
        cout << endl;
    }
    // A B C D 
    // A B C D 
    // A B C D 
    // A B C D 

    // Triangle Pattern (With Numbers) Increase number top to bottom only
    int n = 4;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){ // j < i+1 (Actually run to i, mean j <= i)
            cout << (i + 1) << " ";
        }
        cout << endl;
    }
    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4 

    // Triangle Pattern (With Stars)
    int n = 4;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){ 
            cout << "* ";
        }
        cout << endl;
    }
    // * 
    // * * 
    // * * * 
    // * * * * 
    
    // Triangle Pattern (With Alphabets)
    int n = 4;
    for (int i = 0; i < n; i++){
        char ch = 'A';
        for (int j = 0; j < i + 1; j++){ 
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    // A 
    // A B 
    // A B C 
    // A B C D 

    // Triangle Pattern (With Numbers) Increase number left to right only
    int n = 4;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= i + 1; j++){ 
            cout << j << " ";
        }
        cout << endl;
    }
    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 

    // Reverse Tringle Pattern (With Numbers)
    int n = 4;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j > 0; j--){
             cout << j << " ";
         }
         cout << endl;
    }
   // 1 
   // 2 1 
   // 3 2 1 
   // 4 3 2 1

   // Pyramid Triangle Pattern (With Numbers)
   int n = 4;
   for (int i = 0; i < n; i++) {
       // spaces 
       for (int j = 0; j <n - i - 1; j++){
            cout << " ";
       }
       // nums1
       for (int j = 1; j <= i + 1; j++){
            cout << j;
       }
       // nums2
       for (int j = i; j > 0; j--){
            cout << j;
       }
       cout << endl;

   }
    //    1
    //   121
    //  12321
    // 1234321
    
    return 0;
}