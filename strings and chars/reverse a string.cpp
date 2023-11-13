#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int n=str.size();
    for(int i=0;i<n/2;i++)
    {
        int swap=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=swap;
    }
    cout<<"\n "<<str;
    return 0;
}