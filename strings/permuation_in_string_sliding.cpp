// PROBLEM 567 PERMUATION IN STRING 

class Solution {
    public:
    
        bool isFreqSame(int freq1[],int freq2[]){
            for(int i=0;i<26;i++){ //comparing first string frequ and second string freq order
                if(freq1[i]!=freq2[i]){
                    return false;
                }
            }
            return true;
        }
    
        bool checkInclusion(string s1, string s2) {
            int freq[26] = {0};
            for(int i=0;i<s1.length();i++){
                int idx = s1[i] - 'a'; //give us the index of respectivfe variable;
                freq[idx]++;
            }
            int windsize = s1.length();
    
            for(int i=0;i<s2.length();i++){
                int windIdx = 0, idx = i;
                int windFreq[26]= {0};
    
                while(windIdx<windsize && idx<s2.length()){
                    windFreq[s2[idx]-'a']++;
                    windIdx++; //for one window for other we have to forward na
                    idx++;
                }
    
                if(isFreqSame(freq,windFreq)) {
                    return true;
                }
            }
            return false;
        }
    };