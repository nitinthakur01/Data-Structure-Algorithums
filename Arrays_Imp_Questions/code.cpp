#include <iostream>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {

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

    return 0;
}