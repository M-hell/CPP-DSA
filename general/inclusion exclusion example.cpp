#include<bits/stdc++.h>
using namespace std;
int main()
{
	//no of numbers divisible by 5 or 7 btw 1 to 1000
    int n1=0;
    int n2=0;
    int n3=0;
    int total;
    int i;
    for(i=1;i<=1000;i++)
    {
        if(i%5==0)
        {
            n1++;
        }
        if(i%7==0)
        {
            n2++;
        }
        if(i%5==0 && i%7==0)
        {
            n3++;
        }
    }
    total=n1+n2-n3;
    cout<<total;
    return 0;
}