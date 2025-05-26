void merge(vector<int>&arr,int s,int e){
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

     int *first=new int[len1];
     int *second=new int[len2];

     //step 2 copy the array values inside the array

      int mainArray=s;
     for(int i=0;i<len1;i++)
     {
        first[i]=arr[mainArray++];
     }
     
     mainArray=mid+1;
     for(int i=0;i<len2;i++)
     {
        second[i]=arr[mainArray++];
     }

     //merege 2 sorterd arrays
     int index1=0,index2=0;
     mainArray=s;

     while(index1<len1 && index2<len2)
     {
          if(first[index1]<second[index2])
          {
              arr[mainArray++]=first[index1++];
          }

          else{
              arr[mainArray++]=second[index2++];
          }
     }

      while(index1<len1){
         arr[mainArray++]=first[index1++];
      }
     
      while(index2<len2){
         arr[mainArray++]=second[index2++];
      }

      delete []first;
      delete []second;

}

void solve(vector<int>&arr, int s,int e){
    if(s>=e)
    {
        return;
    }

    int mid=(s+e)/2;

    solve(arr,s,mid);

    solve(arr,mid+1,e);

    merge(arr,s,e);
}




void mergeSort(vector < int > & arr, int n) {
 solve(arr,0,n-1);
 return ;
}