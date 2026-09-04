#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    // HASHING

    // 1. Two Sum Problem
    // int arr[] = {5, 2, 11, 7, 15};
    // int size = 4;
    // int target = 9;
    // unordered_map<int, int> m;
    
    // // time comp is o(n)
    // for(int i = 0; i < size; i++){
    //     int first = arr[i];
    //     int second = target - first;
    
    //     if(m.find(second) != m.end()) { // O(1)
    //         cout << "Indices: " << m[second] << ", " << i << endl; // Indices: 1, 3
    //         break;
    //     }
    //     m[first] = i;
    // }

    // 2. Three Sum Problem
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int n = 6;

    sort(nums, nums + n);

    for(int i = 0; i < n; i++){
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        int j = i + 1, k = n - 1;

        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum > 0){
                k--;
            }else if (sum < 0){
                j++;
            }else {
                cout << "[" << nums[i] << ", "
                     << nums[j] << ", "
                     << nums[k] << "]" << endl; // [-1, -1, 2] [-1, 0, 1]
                j++; k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }

    return 0;
}
