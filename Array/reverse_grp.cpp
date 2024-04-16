#include <iostream>
#include <vector>
#include <algorithm>

void reverseSubArray(std::vector<int>& arr, int N, int K) {
    for (int i = 0; i < N; i += K) {
        int left = i;
        int right = std::min(i + K - 1, N - 1); // Determine the end index of the current sub-array
        
        // Reverse the current sub-array
        while (left < right) {
            std::swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int N = 5;
    int K = 3;
    std::vector<int> arr = {1, 2, 3, 4, 5};
    
    // Reverse sub-array groups of size K
    reverseSubArray(arr, N, K);
    
    // Print the modified array
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
