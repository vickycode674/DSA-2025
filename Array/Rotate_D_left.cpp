vector<int> rotateArray(vector<int>arr, int k) {
int n=arr.size();
//step 1- reducing the no of rotation by as its cyclic so get modulous
 k=k%n;

 vector <int>temp(arr.size());

//step 2- create a temp array and store the rotating values
 for(int i=0;i<k;i++)
 {
    //  temp.push_back(arr[i]);
    temp[i]=arr[i];
 }

// Step 3 after the k or d rotation start moving the array to left 
 for(int i=k;i<n;i++)
 {
     arr[i-k]=arr[i];
 }

//Step 4 after whole things done bring back whole temp into respective array
 for(int i=n-k;i<n;i++)
 {
     arr[i]=temp[i-(n-k)];
 }

 return arr;
}
