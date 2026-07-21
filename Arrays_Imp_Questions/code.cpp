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
    long long ans = 1;

    // Time complexity is O(log n)
    while (binaryForm > 0) {
        if (binaryForm % 2 == 1) { // Last binary bit is 1
            ans *= x;
        }
        x *= x; // Square the base
        binaryForm /= 2; // Remove last binary bit
    }
    cout << ans << endl; // 243

    return 0;
}