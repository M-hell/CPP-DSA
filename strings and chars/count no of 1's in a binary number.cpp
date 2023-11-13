#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    int c=0;
    cout<<"enter a binary no and count no of 1's in the no = ";
    cin>>str;
    int l;
    l=str.size();
    for(int i=0;i<=l-1;i++)
    {
        if(str[i]=='1')
        {
            c++;
        }
    }
    cout<<"\n no of 1's in the binary no is--"<<c;
    return 0;
}