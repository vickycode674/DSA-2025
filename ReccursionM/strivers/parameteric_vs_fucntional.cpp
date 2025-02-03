#include <iostream>
using namespace std;

//parametrized way of recurrsion
void func(int n,int sum){
  if(n<1){
    cout<<sum<<endl;
    return ;
  }
  return func(n-1,sum+n);
}

int main() 
{
   func(125,0); //adding of params with five and zero
   cout<<"Hello world================="
    return 0;
}

//fucntional way of represeniting reccursion
void fucntion (int n){ //finding out the fucntional way of summation of terms
    if(n==0){
        return 0;
    }

    return f(n-1) + n;
}