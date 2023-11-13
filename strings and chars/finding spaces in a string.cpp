#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    int c;
    cout<<"enter your statement --"<<endl;
    getline(cin,str);
    int l=str.size();
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
           c++;
        }
    }
    cout<<"no of spaces in the string--"<<c<<endl;
    return 0;
}