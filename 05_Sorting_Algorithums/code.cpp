#include <iostream>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main(){
    // SORTING ALGORITHUMS :-

    // 1. Bubble Sort
    int arr[] = {1, 4, 2, 5, 3};
    int size = 5;

    // Time complexity is O(n^n)
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; // 1 2 3 4 5 
    }

    // 2. Selection Sort
    int arr[] = {1, 4, 2, 5, 3};
    int size = 5;

    // Time complexity is O(n^2)
    for(int i = 0; i < size - 1; i++){
        int smallestInd = i; // unsorted part starting
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[smallestInd]) {
                smallestInd = j;
            }
        }
        swap(arr[i], arr[smallestInd]);
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; // 1 2 3 4 5 
    }

    // 3. Instertion Sort
    int arr[] = {1, 4, 2, 5, 3};
    int size = 5;
    
    // Time complexity is O(n^2)
    for (int i = 1; i < size; i++) {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // 1 2 3 4 5 
    }
}

