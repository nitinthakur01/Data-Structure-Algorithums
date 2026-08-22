#include <iostream>
#include <vector>
#include <climits>
#include<algorithm>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

// 4. Book allocation or Allocate book (Hard)

int isValid(vector<int> &arr, int n, int m, int maxAllowedPages){ // O(n)
    int students = 1, pages = 0;
    // check validity of ans
    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        } else {
            students ++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}

int allocatedBooks(vector<int> &arr, int n, int m){ // O(logN * n) N = range
    if(m > n){ // no. of students > no. of books
        return -1;
    }
    int sum = 0;
    for(int i = 0; i < n; i++){ // O(n)
        sum += arr[i];
    }
    int ans = -1;
    int start = 0, end = sum; // range of possible ans

    while(start <= end){ 
        int mid = start + (end - start) / 2;

        if(isValid(arr, n, m, mid)){ // valid
            ans = mid;
            end = mid - 1; // search in left
        }
        else { // Invalid
            start = mid + 1; // search in right
        }
    }
    return ans;
}

// 5. Painter Partition Problem

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){ // O(n)
    int painters = 1, time = 0;

    for(int i = 0; i < n; i++){
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        } else {
            painters ++;
            time = arr[i];
        }
    }
    return painters <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m){ // O(log(sum) * n)
    int sum = 0, maxVal = INT_MIN;

    for(int i = 0; i < n; i++){ // O(n)
        sum += arr[i];
        maxVal = max(arr[i], maxVal);
    }
    int start = maxVal, end = sum, ans = - 1;

    while(start <= end){
        int mid = start + (end - start) / 2; // find mid

        if(isPossible(arr, n, m, mid)){ // for left
            ans = mid;
            end = mid - 1;
        } else { // for right
            start = mid + 1;
        }
    }
    return ans;
}

// 6. Aggresive Cows Problem

bool isPossibleCows(vector<int> &arr, int N, int C, int minAllowedDist){ // O(N)
    int cows = 1, lastStallPos = arr[0];

    for(int i = 1; i < N; i++) {
        if(arr[i] - lastStallPos >= minAllowedDist){
            cows ++;
            lastStallPos = arr[i];
        }
        if(cows == C){
            return true;
        } 
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C){
    sort(arr.begin(), arr.end());
    int start = 1, end = arr[N - 1] - arr[0], ans = -1; // end = maxVal - minVal

    while(start <= end){ // O(log(Range) * N)
        int mid = start + (end - start) / 2;

        if(isPossibleCows(arr, N, C, mid)){ // search in right
            ans = mid;
            start = mid + 1;
        } else { // search in left
            end = mid - 1;
        }
    }
    return ans;
}


int main() {
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

    // 2. Peak index in a mountain array

    int arr[] = {0, 3, 8, 9, 5, 2};
    int size = 6;
    int start = 1, end = size -2;
    int peak = -1;

    // Time comp = O(logn), space comp = O(1)
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
            peak = mid;
            break;
        }
        else if(arr[mid - 1] < arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    cout << "Peak index = " << peak << endl; // 3
    cout << "Peak element = " << arr[peak] << endl; // 9

    // 3. Single elements in sorted array

    int arr[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int size = 9;
    int start = 0, end = size - 1;
    int sinElem = -1;

    // Time comp = O(logn), space comp = O(1)
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1]){
            sinElem = mid;
            break;
        }
        if(mid % 2 == 0){ // no is even both side of mid
            if(arr[mid - 1] == arr[mid]){
                end = mid - 1; // search in left
            } else {
                start = mid + 1; // search in right
            }
        } else { // no is odd both side of mid
            if(arr[mid - 1] == arr[mid]){
                start = mid + 1; // search in right
            } else {
                end = mid - 1; // search in left

            }
        }
    }
    cout << "single element is " << sinElem << endl; // single element is 2

    // 4. Book allocation or Allocate book (Hard)

    vector<int> arr1 = {2, 1, 3, 4};
    int n = 4, m = 2;
    cout << allocatedBooks(arr1, n, m) << endl; // 6

    // 5. Painter Partition Problem

    vector<int> arr2 = {40, 30, 10, 20};
    int n = 4, m = 2;
    cout << minTimeToPaint(arr2, n, m); // 60

    // 6. Aggresive Cows Problem 
    
    vector<int> arr3 = {1, 2, 8, 4, 9};
    int N = 5, C = 3; // N = No. of stalls, C = No. of cows
    cout << getDistance(arr3, N, C) << endl; // 3

    return 0;
}