class Solution {
    public:
    
      bool isalphaNum(char ch){ //this fucntion will verify whether string is alphanumeric or not
        if(ch >='0' && ch<='9' || tolower(ch)>='a' && tolower(ch)<='z'){
            return true;
        }
        return false;
      }
    
        bool isPalindrome(string s) {
            int n=s.size();
            int start= 0;
            int end=n-1;
    
        while(start<end){
            if(!isalphaNum(s[start])){
                start++;
                continue;
            }
    
            if(!isalphaNum(s[end])){
               end--;
               continue;
            } 
    
            if(tolower(s[start])!= tolower(s[end])){
                return false;
            }
            start++;
            end--;
          }
        return true;
        }
    };