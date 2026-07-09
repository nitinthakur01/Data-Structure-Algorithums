#include <iostream>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main()
{
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
    return 0;
}