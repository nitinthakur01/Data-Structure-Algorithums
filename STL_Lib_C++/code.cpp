#include <iostream>
#include <vector>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    // STL : (standard template library)

    // CONTAINERS :-
    // 1. vectors
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    vec.emplace_back(4);
    vec.emplace_back(5);

    vec.pop_back();
    vec.pop_back();

    cout << vec.size() << endl; // 3
    cout << vec.capacity() << endl; // 8

    for(int val : vec) {
        cout << val << " "; // 1 2 3
    }
    cout << endl;

    cout << vec[1] << endl; // 2
    cout << vec.at(1) << endl; // 2

    cout << vec.front() << endl; // 1
    cout << vec.back() << endl; // 3

    vector<int> vec1 = {1, 2, 3, 4, 5};
    for (int val : vec1) {
        cout << val << " "; // 1 2 3 4 5 
    }
    cout << endl;

    vector<int> vec2 (5, 1);
    for (int val : vec2) {
        cout << val << " "; // 1 1 1 1 1 
    }
    cout << endl;

    vector<int> vec3 = {1, 2, 3, 4, 5};
    vec3.erase(vec3.begin());
    vec3.insert(vec3.begin() + 2, 150);

    for (int val : vec3) {
        cout << val << " "; // 2 3 150 4 5 
    }
    cout << endl;

    vector<int> vecIt = {1, 2, 3, 4, 5};
    cout << "begin : " << *(vecIt.begin()) << endl; // 1
    cout << "end : " << *(vecIt.end()) << endl; // 0

    return 0;

}