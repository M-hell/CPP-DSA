#include<bits/stdc++.h>
#include<string>
using namespace std;
void stringrecursion(string);
int main()
{
    string str;
    getline(cin,str);
    int l=str.size();
    stringrecursion(str);
    return 0;
}
void stringrecursion(string str)
{
    string str1;
    if(str.size()==0)
    {
        return;
    }
    str1=str.substr(1);
    stringrecursion(str1);
    cout<<str[0];
}