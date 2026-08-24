#include <iostream>
#include <vector>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe


int main(){
    // MATRIX (2D Array) :-

    // Access Element
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;
    cout << matrix[2][1] << endl; // 8

    // apply loop
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 1 2 3 
    // 4 5 6 
    // 7 8 9 
    // 10 11 12 

    // 2D Vector
    // rows => mat.size()
    // cols => mat[i].size() (element in 1 row)
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << mat[0][0]; // 1

    return 0;
}