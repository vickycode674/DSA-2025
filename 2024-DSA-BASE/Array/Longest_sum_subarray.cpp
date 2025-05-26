//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  //brute force
    // int lenOfLongestSubarr(vector<int>& arr, int k) {
    //     int n = arr.size();
    //     int max_len = 0;

    //     for (int i = 0; i < n; i++) {
    //         int current_sum = 0;

    //         // Check subarrays starting at index i
    //         for (int j = i; j < n; j++) {
    //             current_sum += arr[j];

    //             // Check if the current subarray sum equals k
    //             if (current_sum == k) {
    //                 max_len = max(max_len, j - i + 1);
    //             }
                
    //              if (current_sum > k) break; 
    //         }
    //     }

    //     return max_len;
    // }

    //optimal solution with the rating of o(n) complexity
      int lenOfLongestSubarr(vector<int>& arr, int k) {
        unordered_map<int, int> prefix_map; // Map to store prefix sum and its index
        int prefix_sum = 0; // Initialize prefix sum
        int max_len = 0;    // Initialize maximum length

        for (int i = 0; i < arr.size(); i++) {
            prefix_sum += arr[i]; // Update the prefix sum

            // Check if the current prefix sum equals k
            if (prefix_sum == k) {
                max_len = i + 1; // Update max_len for subarray starting at index 0
            }

            // Check if (prefix_sum - k) exists in the map
            if (prefix_map.find(prefix_sum - k) != prefix_map.end()) {
                max_len = max(max_len, i - prefix_map[prefix_sum - k]);
            }

            // Store the prefix sum in the map if it's not already there
            if (prefix_map.find(prefix_sum) == prefix_map.end()) {
                prefix_map[prefix_sum] = i;
            }
        }

        return max_len;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends