class Solution {
    public:
        void reverseString(vector<char>& s) {
            int start=0;
            int end=s.size()-1;
            while(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
    };
}
//we call use c++ stl functionlity for reverse(s.begin(),s,end());
