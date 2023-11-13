#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int l=str.size();
    for(int i=0;i<l;i++)
    {
        if(str[i]=='p' && str[i+1]=='i')
        {
			str[i]='3';
			str[i+1]='.';
			str[i+2]='1';
			str[i+3]='4';
        }
    }
    cout<<str;
    return 0;
}