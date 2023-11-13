#include<bits/stdc++.h>
using namespace std;
int getbit(int,int);
int main()
{
    int bit,pos;
    cout<<"enter number and position of getting the bit--";
    cin>>bit>>pos;
    cout<<"\n"<<getbit(bit,pos);
    return 0;
}
int getbit(int bit,int pos)
{
    if(bit&(1<<pos)!=0)
    return 1;
    else
    return 0;
}
