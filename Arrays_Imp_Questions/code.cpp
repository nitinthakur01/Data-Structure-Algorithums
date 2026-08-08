#include <iostream>
#include <algorithm>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    // ARRAY IMP QUESTIONS

    // 1. BEST TIME TO BUY AND SELL STOCKS (V.Imp)

    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = 6;
    int maxProfit = 0, bestBuy = prices[0];

    // Time complexity is O(n) linear
    for(int i = 1; i < size; i++){
        if(prices[i] > bestBuy){ 
            maxProfit = max(maxProfit, prices[i] - bestBuy); // Best profit so far.
        }
        bestBuy = min(bestBuy, prices[i]); // update bestBuy every time
    }
    cout << maxProfit << endl; // 5

    // 2. Compute x^n (Binary Exponentiation)

    long long x = 3;
    long binaryForm = 5;
    long long answer = 1;

    // Time complexity is O(log n)
    while (binaryForm > 0) {
        if (binaryForm % 2 == 1) { // Last binary bit is 1
            answer *= x;
        }
        x *= x; // Square the base
        binaryForm /= 2; // Remove last binary bit
    }
    cout << answer << endl; // 243

    // 3. Container with most water (Imp)

    int hieght[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = 9;
    int maxWater = 0;
    int lp = 0, rp = size - 1; // two pointer approach

    // Time complexity is O(n) linear
    while(lp < rp) { // once meet or cross each other
        int wt = rp - lp;
        int ht = min(hieght[lp], hieght[rp]);
        int currWater = wt * ht;
        maxWater = max(maxWater, currWater); // comparing maxWater with currWater

        if(lp < rp){ // comparing on the basis of ht of pointers
            lp ++;
        } else {
            rp --;
        }
    }
    cout << maxWater << endl; // 49

    // 4. Product of array except self (V.Imp)

    // Time comp is O(n), space comp is O(1)
    int nums[] = {1, 2, 3, 4};
    int size = 4;
    int ans[size]; // create an integer array

    // Step 1: Store prefix products
    ans[0] = 1;
    for (int i = 1; i < size; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    // Step 2: Multiply with suffix productsg
    int suffix = 1;
    for (int i = size - 1; i >= 0; i--) {
        ans[i] = ans[i] * suffix;
        suffix = suffix * nums[i];
    }
    // Print answer
    for (int i = 0; i < size; i++) {
        cout << ans[i] << " "; // 24 12 8 6
    }

    // 5. Sort Array with 0s, 1s and 2s (Dutch National Flag Algo)

    int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int size = 10;
    int mid = 0, low = 0, high = size - 1;

    // Time Complexity is O(n), Space Complexity is O(1)
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid ++;
            low ++;
        }
        else if(arr[mid] == 1){
            mid ++;
        }
        else{
            swap(arr[high], arr[mid]);
                high --;
        }
    }
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; // 0 0 0 0 1 1 1 2 2 2 
    }

    // 6. Merge two Sorted Array (V.Imp)

    int A[] = {1, 2, 3, 0, 0, 0};
    int B[] = {2, 5, 6};

    int m = 3, n = 3; // valid sizes of two array
    int i = m - 1, j = n - 1, index = m + n - 1; // last valid elements         

    // time comp = O(m+n), space comp = O(1)
    while(i >= 0 && j >= 0){
        if(A[i] >= B[j]){
        A[index] = A[i];
        index --;
        i --;
    }
    else {
        A[index] = B[j];
        index --;
        j--;
        }
    }
   while (j >= 0){
        A[index] = B[j];
        index --;
        j--;
   }

    // Print merged array
    for (int i = 0; i < m + n; i++) {
        cout << A[i] << " "; // 1 2 2 3 5 6 
    }

    // 7. Next Permutation (Imp)

    int arr[] = {1, 2, 3};
    int size = 3;

    // time comp = O(m+n), space comp = O(1)

    // (i) find pivot
    int pivot = -1;
    for (int i = size - 2; i >= 0; i--){
        if(arr[i] < arr[i + 1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
          reverse(arr, arr + size);
        return 0;
    }

    // (ii) Next larger element
    for(int i = size- 1; i > pivot; i--){
        if(arr[i] > arr[pivot]){
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    //(iii) Reverse
    int i = pivot + 1, j = size - 1;
    while(i <= j){
        swap(arr[i++], arr[j--]);
    }

    // Print permuted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // 1 3 2
    }
    return 0;
}