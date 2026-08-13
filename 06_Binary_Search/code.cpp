#include <iostream>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    /*
    // BINARY SEARCH :-
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int size = 7;
    int target = 12;
    int ans = -1;
    int start = 0, end = size - 1;

    while(start <= end){
        int mid = start + (end - start) / 2; // apply this for find mid

        if(target > arr[mid]){
            start = mid + 1; // 2nd half
        }
        else if(target < arr[mid]){
            end = mid - 1; // 1st half
        }
        else{
            ans = mid; // get our ans
            break;
        }
    }
    cout << "Target found at index: " << ans << endl; // Target found at index: 6
    */

    // 1. Search in Rotated Sorted array

    int arr[] = {3, 4, 5, 6, 0, 1, 2};
    int size = 7;
    int target = 0;
    int ans = -1;
    int start = 0, end = size - 1;

    // Time comp = O(logn), space comp = O(1)
    while(start <= end){
        int mid = start + (end - start) / 2; // find mid 
        if(arr[mid] == target){
            ans = mid;
            break;
        }
        if(arr[start] <= arr[mid]){ // left half is sorted
            if (arr[start] <= target && target <= arr[mid]){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else { // right half is sorted
             if (arr[mid] <= target && target <= arr[end]){
                start = mid + 1;
            }
            else {
                 end = mid - 1;
            }

        }
    }
    cout << "Target found at index: " << ans << endl; // Target found at index: 4


    return 0;
}