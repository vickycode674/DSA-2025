class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     int n=nums.size();
    //     int k=0;
    //     int value=0;
    //     if(n==0){
    //         return 0;
    //     }
    //   for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //     if(nums[i]==nums[j]){
    //       k++;
    //     }
    //     }
    //     if(k==1){
    //          value= nums[i];
    //     } 
    //      k=0;
    //   }  
    //  return value;
    // }

    //  int result = 0; // Initialize XOR result
    //     for (int num : nums) {
    //         result ^= num; // XOR each number
    //     }
    //     return result; // The single number remains
        std::unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (auto& pair : freq) {
            if (pair.second == 1) {
                return pair.first;
            }
        }
        return -1; // Default return, though the constraints ensure this won't happen
    }
};