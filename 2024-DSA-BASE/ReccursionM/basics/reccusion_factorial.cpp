//  Factorial Numbers Not Greater Than N

long long factorial(long long x)
{
    if(x==0)
    return 1;

    return x*factorial(x-1);
}


void facto(long long n,vector<long long>&ans)
{
int new_indx=ans.size()+1;

if(factorial(new_indx)>n)
{
    return ;
}

ans.push_back(factorial(new_indx));

facto(n,ans);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long>ans;
    facto(n,ans);
    return ans;
}
