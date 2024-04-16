#include <iostream>
using namespace std;

int main()
{
  int arr[5]={1,3,4,2,6};

int n=5;
  int k=2;

  for(int i=k;i<n;i++)
  {
     arr[i]=arr[i+1];
  }
  arr[n-1]=67;

  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  //delete at index k for the particular array


}