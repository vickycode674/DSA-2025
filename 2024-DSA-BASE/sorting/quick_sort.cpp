#include <bits/stdc++.h> 
int partition(vector<int>& arr,int s,int e)
{
    int pivot=arr[s];

    int count=0;

    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<pivot) //elements which are shorter than pivot are counted and shifted forwards
        {
            count++;
        }
    }
    //place pivot at right

    int pivotIndex=s+count;

    swap(arr[pivotIndex],arr[s]); //swap the follwing element with counting position

    //left and right changes with i and j

    int i=s,j=e;

    while(i<pivotIndex && j >pivotIndex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
       
    }
    }

void solve(vector<int>& arr,int s,int e)
{
    //base case
    if(s>=e)
      return ;

  //creating a partion

  int p=partition(arr,s,e);

  //left partitioin

  solve(arr,s,p-1);

  //right partition

  solve(arr,p+1,e);
}


vector<int> quickSort(vector<int> arr)
{
   solve(arr,0,arr.size()-1);
   return arr;
}


