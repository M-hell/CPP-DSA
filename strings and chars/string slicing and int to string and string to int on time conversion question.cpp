#include<bits/stdc++.h>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	string s="07:05:45PM";
	string ans;
    string str1=s.substr(s.size()-2,s.size());
    int hour=stoi(s.substr(0,2));
    if(str1=="AM" and hour==12)
    {
        hour=hour-12;
    }
    if(str1=="PM" and hour<12)
    {
        hour=hour+12;
    }
    if(hour<10)
    {
        ans="0"+to_string(hour);
    }
    else
    {
        ans=to_string(hour);
    }
    string str2=s.substr(2,s.size()-4);
    cout<<ans+str2<<endl;
}
