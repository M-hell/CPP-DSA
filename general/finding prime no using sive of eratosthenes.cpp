#include<bits/stdc++.h>
using namespace std;
void prime_sieve(int);
int main()
{
    int n;
    cout<<"enter the till what no u want all prime no--- ";
    cin>>n;
    prime_sieve(n);
    return 0;
}
void prime_sieve(int n)
{
    int arr[n+1]={0};
    int i=2;
    while(i<=n)
    {
        for(int j=i+1;j<=n;j++)
            {
            if(j%i==0)
               {
                   arr[j]=1;
               }
            }
            i++;
    }
    for(i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            cout<<"\n "<<i;
        }
    }
}