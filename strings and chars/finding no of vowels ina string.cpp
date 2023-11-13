#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    int c;
    cout<<"\n enter your word--";
    getline(cin,str);
    int l=str.size();
    for(int i=0;i<l;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            c++;
        }
    }
    cout<<"no of vowels in the word--"<<c;
    return 0;
}