#include <iostream>
#include <unordered_map>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    // HASHING

    // 1. Two Sum Problem
    int arr[] = {5, 2, 11, 7, 15};
    int size = 4;
    int target = 9;
    unordered_map<int, int> m;
    
    // time comp is o(n)
    for(int i = 0; i < size; i++){
        int first = arr[i];
        int second = target - first;
    
        if(m.find(second) != m.end()) { // O(1)
            cout << "Indices: " << m[second] << ", " << i << endl; // Indices: 1, 3
            break;
        }
        m[first] = i;
    }


    return 0;
}
