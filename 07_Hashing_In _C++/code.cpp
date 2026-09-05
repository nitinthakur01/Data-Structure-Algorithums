#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {
    // HASHING

    // 1. Two Sum Problem
    int arr[] = {5, 2, 11, 7, 15};
    int size = 4;
    int target = 9;
    unordered_map<int, int> m;
    
    // time comp is O(n)
    for(int i = 0; i < size; i++){
        int first = arr[i];
        int second = target - first;
    
        if(m.find(second) != m.end()) { // O(1)
            cout << "Indices: " << m[second] << ", " << i << endl; // Indices: 1, 3
            break;
        }
        m[first] = i;
    }

    // 2. Three Sum Problemn (sum equal to 0)
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int n = 6;

    sort(nums, nums + n);

    // time comp is O(nlogn + n^2)
    for(int i = 0; i < n; i++){
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        int j = i + 1, k = n - 1; // two pointers

        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum > 0){
                k--;
            }else if (sum < 0){
                j++;
            }else { // sum = 0
                cout << "[" << nums[i] << ", "
                     << nums[j] << ", "
                     << nums[k] << "]" << endl; // [-1, -1, 2] [-1, 0, 1]
                j++; k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }

    // 3. Four Sum Problemn (sum equal to 0)
    int nums[] = {-2, -1, -1, 1, 1, 2, 2};
    int n = 7;

    sort(nums, nums + n);

    // time comp is O(nlogn + n^3)
    for(int i = 0; i < n; i++){
        if(i > 0 && nums[i] == nums[i - 1]) continue;

        for(int j = i + 1; j < n;){
            int k = j + 1, l = n - 1; // two pointers

        while(k < l){
            int sum = nums[i] + nums[j] + nums[k] + nums[l];
                if(sum < 0){
                    k++;
                } else if (sum > 0){
                    l--;
                } else { // sum == 0
                    cout<< "[" << nums[i] << ", "
                        << nums[j] << ", "
                        << nums[k] << ", "
                        << nums[l] << "]" << endl; // [-2, -1, 1, 2] [-1, -1, 1, 1]
                    k++, l--;

                    while(k < l && nums[k] == nums[k - 1]) k++; 
                }
            }
            j++;
            while(j < n && nums[j] == nums[j - 1]) j++;
        }
    }

    return 0;
}
