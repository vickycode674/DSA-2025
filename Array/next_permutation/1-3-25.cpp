// https://leetcode.com/problems/next-permutation/

class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            long long ind=-1;
            long long n=nums.size();
    
            //step 1 finding out possible 
            for(int i=n-2;i>ind;i--)
            {
                if(nums[i]<nums[i+1])
                {
                    ind=i;
                    break;
                }
            }
            if(ind==-1){
                reverse(nums.begin(),nums.end());
                return;
            }
            //step 2 after finding next change its time next least flow
            for(int i=n-1;i>ind;i--){
                if(nums[i]>nums[ind])
                {
                    swap(nums[i],nums[ind]);
                    break;
                }
            }
    
            //step 3 we need to handle reversing
            reverse(nums.begin()+ind+1,nums.end()); //sort after the ind element placed
        }
    };