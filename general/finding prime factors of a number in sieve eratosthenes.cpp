#include<bits/stdc++.h>
using namespace std;
void prime_factors(int);
int main()
{
    int n;
    cout<<"enter the no of which u need prime factors-- ";
    cin>>n;
    prime_factors(n);
    return 0;
}
void prime_factors(int n)
{
    int arr[n+1]={0};
    int i=2;
    int factor=1;
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
        if(arr[i]==0 && n%i==0)
        {
            cout<<i<<endl;
            factor=factor*i;
        }
    }
    cout<<"\n the factorisation is="<<factor;
}