// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/ 
class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int n=nums.size();
            int pos=0,neg=0;
          for(int i=0;i<n;i++){
            if(nums[i]>0)
            {
             pos++;
            }
            if(nums[i]<0){
             neg++;
            }
          }
          return max(pos,neg);
        }
    };

    // class Solution {
        // public:
        //     int maximumCount(vector<int>& nums) {
        //         int n = nums.size();
                
        //         // Find first positive number index
        //         int posIdx = lower_bound(nums.begin(), nums.end(), 1) - nums.begin();
                
        //         // Find first non-negative number index (all negatives are before it)
        //         int negIdx = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
                
        //         int posCount = n - posIdx; // Elements from posIdx to end are positive
        //         int negCount = negIdx; // Elements before negIdx are negative
                
        //         return max(posCount, negCount);
        //     }
        // };
        