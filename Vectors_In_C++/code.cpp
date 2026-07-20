#include <iostream>
#include <vector>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    // VECTORS IN C++ :-

    // syntax
    vector<int> vec = {1, 2, 3};
    cout << vec[0] << endl;
    vector<int> vec (5, 0); // 5 is size of vec
    cout << vec[0] << endl;

    // vector functions
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << vec.size() << endl; // 5

    vec.push_back(25);
    cout << vec.size() << endl; // 6

    vec.pop_back();
    cout << vec.size() << endl; // 5 (remove 25)

    cout << vec.front() << endl; // 1
    cout << vec.back() << endl; // 5
    cout << vec.at(2) << endl; // 3
    cout << vec.capacity() << endl; // 5 

    // vector loop
    for(int val : vec) { // for each loop
        cout << val << endl; // 1 2 3 4 5
    }
    return 0;
}