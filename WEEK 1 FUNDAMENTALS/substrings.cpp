// https://leetcode.com/problems/length-of-last-word/submissions/1560010125/

class Solution {
    public:
        int lengthOfLastWord(string s) {
            int n=s.size();
            int len=0;
            for(int i=n-1;i>=0;i--){
                if(s[i] != ' ')
                {
                 len++;
                }
                else if(len>0){
                    break;
                }
                else{
                    continue;
                }
            }
            return len;
        }
    };