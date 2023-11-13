#include<bits/stdc++.h>
using namespace std;
int setbit(int,int);
int main()
{
    int bit,pos;
    cout<<"enter number and position of getting the bit--";
    cin>>bit>>pos;
    cout<<"\n"<<setbit(bit,pos);
    return 0;
}
int setbit(int bit,int pos)
{
    return (bit | (1<<pos));
}