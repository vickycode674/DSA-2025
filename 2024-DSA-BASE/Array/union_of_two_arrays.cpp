    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        vector<int>result;
        
    int i=0,j=0;
    
    while(i<a.size() && j<b.size()){
    
    //checking the values without duplicates
     if(!result.empty() && result.back()==a[i]){
         i++;
         continue;
     }
     
      if(!result.empty() && result.back()==b[j]){
         j++;
         continue;
     }
     
     
     if(a[i]<b[j]){
         result.push_back(a[i]);
     }
     
     else  if(a[i]>b[j]){
         result.push_back(b[j]);
     }
     
     else{
         result.push_back(a[i]); //when both the fields are having same vlaues
         i++;
         j++;
     }
    }
    
    
    //adding remaing elements 
    
    while(i<a.size()){
        if(result.empty() || result.back()!=a[i]){
            result.push_back(a[i]);
        }
        i++;
    }
    
        while(i<b.size()){
        if(result.empty() || result.back()!=b[j]){
            result.push_back(b[j]);
        }
        j++;
    }
    
    return result;
}

//using the set below [NOT OPTIMAL BUT EASIER WAY TO GET IT]
//{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;


// } Driver Code Ends 
// class Solution {
//   public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
//     vector<int> findUnion(vector<int> &a, vector<int> &b) {
//          set<int> uniqueElements; // Store unique elements
//         for (int num : a) {
//             uniqueElements.insert(num);
//         }
//         for (int num : b) {
//             uniqueElements.insert(num);
//         }
        
//         // Convert the set back to a vector (sorted automatically)
//         return vector<int>(uniqueElements.begin(), uniqueElements.end());
//     }
// };


// } Driver Code Ends