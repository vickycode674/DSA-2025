class Solution {
public:
    // int findMaxConsecutiveOnes(vector<int>& nums) {
    //     int k=0;
    //     int n=nums.size();
    //     vector<int>maxval;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]==1 && nums[i]!=0){
    //            k++;
    //         }
    //         else{
    //           maxval.push_back(k);
    //           k=0;
    //         }
    //     }
    //     if(k>0){
    //        maxval.push_back(k);
    //     }
    //     int m=maxval.size();
    //     sort(maxval.begin(),maxval.end());
    //     return maxval[m-1];
    // }
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0; // To store the maximum number of consecutive 1's
        int currentCount = 0; // To count the current streak of 1's

        for (int num : nums) {
            if (num == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount); // Update the maximum
            } else {
                currentCount = 0; // Reset the count when a 0 is encountered
            }
        }

        return maxCount;
    }
};