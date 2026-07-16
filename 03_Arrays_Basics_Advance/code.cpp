#include <iostream>
#include <climits>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    // ARRAYS (Basic to Advance) :-

    // 1. Sum of arrays element

    // int nums[] = {5, 6, 7, 8, 4};
    // int size = 5;
    // int sum = 0;

    // for(int i = 0; i < size; i++){
    //     sum = sum + nums[i];
    // }
    // cout << sum << endl; // 30

    // 2. Min and Max element from an array

    // min element
    // int nums[] = {5, 15, 22, 1, -15, 24};
    // int size = 6;
    // int minVal = INT_MAX;

    // for(int i = 0; i < size; i++){
    //     if(nums[i] < minVal){
    //         minVal = nums[i];
    //     }
    // }
    // cout << minVal << endl; // -15

    // max element
    // int nums[] = {5, 15, 22, 1, -15, 24};
    // int size = 6;
    // int maxVal = INT_MIN;

    // for(int i = 0; i < size; i++){
    //     if(nums[i] > maxVal){
    //         maxVal = nums[i];
    //     }
    // }
    // cout << maxVal << endl; // 24

    // 3. Second max element from an array

    // int nums[] = {5, 15, 22, 1, -15, 24, 24};
    // int size = 6;

    // int maxVal = INT_MIN;
    // int secondMax = INT_MIN;

    // for (int i = 0; i < size; i++) {
    //     if (nums[i] > maxVal) {
    //         secondMax = maxVal;
    //         maxVal = nums[i];
    //     }
    //     // It handles cases with duplicate maximum values.
    //      else if (nums[i] > secondMax && nums[i] != maxVal) {
    //         secondMax = nums[i];
    //     }
    // }
    // cout << maxVal << endl; // 24
    // cout << secondMax << endl; // 22

    // 4. Reverse the array

    // int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // int size = 7;
    // int start = 0, end = size - 1; // two pointers method

    // while(start < end){ // Once start and end meet (or cross each other)
    //     // swaping values
    //     int temp = arr[start]; 
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }
    // // To show our reverse array
    // for(int i = 0; i < size; i++){
    //     cout << arr[i] << " "; // 5 2 1 8 7 2 4 
    // }
    // cout << endl;

    // 5. All zeroes to left and all ones to right

    // int arr[] = {1, 0, 1, 0, 0, 1, 1, 0};
    // int size = 8;
    // int start = 0, end = size - 1; // two pointers method

    //  while (start < end) { // Once start and end meet (or cross each other)
    //     if (arr[start] == 0) {
    //         start++;
    //     }
    //     else if (arr[end] == 1) {
    //         end--;
    //     }
    //     else {
    //         swap(arr[start], arr[end]);
    //         start++;
    //         end--;
    //     }
    // }
    // // To show new array
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " "; // 0 0 0 0 1 1 1 1 
    // }

    return 0;
}