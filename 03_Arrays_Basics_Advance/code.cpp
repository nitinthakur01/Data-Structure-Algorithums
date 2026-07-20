#include <iostream>
#include <climits> // for using INT_MAX AND INT_MIN
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    
    // ARRAYS (Basic to Advance) :-

    // BASIC QUESTIONS

    // 1. Sum of arrays element

    int nums[] = {5, 6, 7, 8, 4};
    int size = 5;
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + nums[i];
    }
    cout << sum << endl; // 30

    // 2. Min and Max element from an array

    // min element
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int minVal = INT_MAX;

    for(int i = 0; i < size; i++){
        if(nums[i] < minVal){
            minVal = nums[i];
        }
    }
    cout << minVal << endl; // -15

    // max element
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int maxVal = INT_MIN;

    for(int i = 0; i < size; i++){
        if(nums[i] > maxVal){
            maxVal = nums[i];
        }
    }
    cout << maxVal << endl; // 24

    // 3. Second max element from an array

    int nums[] = {5, 15, 22, 1, -15, 24, 24};
    int size = 7;

    int maxVal = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (nums[i] > maxVal) {
            secondMax = maxVal;
            maxVal = nums[i];
        }
        // It handles cases with duplicate maximum values.
         else if (nums[i] > secondMax && nums[i] != maxVal) {
            secondMax = nums[i];
        }
    }
    cout << maxVal << endl; // 24
    cout << secondMax << endl; // 22

    // 4. Reverse the array (Imp)

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int start = 0, end = size - 1; // two pointers method

    while(start < end){ // Once start and end meet 
        // swaping values
        int temp = arr[start]; // we can also use built in swap function
        arr[start] = arr[end];
        arr[end] = temp;
        // increment from start and decrement from end of an array
        start++;
        end--;
    }
    // To show our reverse array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; // 5 2 1 8 7 2 4 
    }
    cout << endl;

    // 5. All zeroes to left and all ones to right (V.Imp)

    int arr[] = {1, 0, 1, 0, 0, 1, 1, 0};
    int size = 8;
    int start = 0, end = size - 1; // two pointers method

     while (start < end) { // Once start and end meet 
        if (arr[start] == 0) {
            start++; // All zeroes should be in left (move right to left)
        }
        else if (arr[end] == 1) {
            end--; // All ones should be in right (move left to right)
        }
        else {
            int temp = arr[start]; // we can also use built in swap function
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    // To show our updated array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // 0 0 0 0 1 1 1 1 
    }
    cout << endl;

    // ADVANCE QUESTIONS

    // 1. Maximum Subarray Sum / Kadane's Algorithum (V.Imp)

    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = 7;
    int currSum = 0,  maxSum = INT_MIN;

    // time complexity is O(n) (linear)
    for(int i = 0; i < size; i++) {
        currSum = currSum + arr[i];
        // Calculate maxSum Value
        maxSum = max(currSum, maxSum); 
        // Reset currSum to 0, if currSum value is -ve
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << maxSum << endl; // 15 (maxSubarray is {5, 4, -1, 7})

    // 2. Majority Element / Moore's Voting Algorithum (V.Imp)

    int arr[] = {1, 2, 2, 1, 1, 1, 2};
    int size = 7;
    int freq = 0, ans = 0;

    // time complexity is O(n) (linear)
    for(int i = 0; i < size; i++){
        if(freq == 0){ 
            ans = arr[i];
        }
        if(ans == arr[i]){ 
            freq ++; // increament if ans is equal to arr[i]
        }
        else{
            freq --; // decreament if ans is not equal to arr[i]
        }
    }
    cout << ans << endl; // 1

    // 3. Pair Sum (Return pair in sorted array with target sum) (Imp)

    int arr[] = {2, 7, 11, 15};
    int size = 4;
    
    int target = 9;
    int i = 0, j = size - 1;

    // time complexity is O(n) (linear)
    while(i < j){// Once start and end meet
        int pairSum = arr[i] + arr[j];
        if(pairSum > target){
            j--;
        }else if(pairSum < target) {
            i++;
        }else { // pairSum is equal to target
            cout << "Indices: " << i << ", " << j << endl; // Indices: 0, 1
            cout << "Values : " << arr[i] << ", " << arr[j] << endl; // Values : 2, 7
            break;
        }
    }

    // 4. Remove Duplicates from the sorted array

    int arr[] = {1, 1, 2, 2, 3, 3, 3, 4, 5};
    int size = 9;
    int j = 0;

    // time complexity is O(n) (linear)
    for(int i = 0; i < size; i++){
        if(arr[i] != arr[j]){ 
            j++;
            arr[j] = arr[i]; // Take the value from arr[i] and store (copy) into arr[j].
        }
    }
    // To show our array with unique elements
      for (int k = 0; k <= j; k++) {
        cout << arr[k] << " " << endl;; // 1, 2, 3, 4, 5
    }

    // 5. Intersection of two arrays

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,4,5,7};

    int size1 = 5, size2 = 4;
    int i = 0, j = 0;

    while (i < size1 && j < size2) { // once start and end meet for both arrays
        if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " " << endl; // print values include in both arrays 2 4 5
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    
    return 0;
}
