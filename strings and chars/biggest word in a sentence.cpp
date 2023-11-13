#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    int a;
    int currentlength=0;
    int maxlength=0;
    cout<<"enter your statement and found out which one is the biggest word--";
    gets(arr);
    a=strlen(arr);
    for(int i=0;i<a;i++)
    {
        if(arr[i]!=' ' || arr[i]!='\0')
        {
            currentlength++;
            if(currentlength>maxlength)
            {
            	maxlength=currentlength;
			}
        }
        if(arr[i]==' '|| arr[i]=='\0')
        {
        	currentlength=0;
		}
    }
    cout<<"\n the biggest word is of "<<maxlength<<" letters..";
    return 0;
}
