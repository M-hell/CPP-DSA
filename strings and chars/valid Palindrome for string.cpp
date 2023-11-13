#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
        if(s.empty()==1){
            return true;
        }
       deque<char>dq;
       string set="abcdefghijklmnopqrstuvwxyz0123456789";
       for(int i=0;i<s.size();i++)
       {
           char ch=tolower(s[i]);
           if(count(set.begin(),set.end(),ch)>0)
           {
               dq.push_back(ch);
           }
       }
       int length=dq.size();
       for(int j=0;j<length;j++)
       {
           if(dq.front()!=dq.back())
           {
               return false;
           }
           dq.pop_back();
           dq.pop_front();
       }
       return true;
    }
int main()
{
	string s="3ni !@#$ t, t-in3";
	if(isPalindrome(s)==true){
		cout<<"yesss";
	}
	else{
		cout<<"nooo";
	}

}