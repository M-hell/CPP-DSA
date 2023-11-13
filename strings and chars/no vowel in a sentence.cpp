#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    char arr[100];
    int a;
    int currentlength=0;
    cout<<"enter your statement--";
    gets(arr);
    a=strlen(arr);
    for(int i=0;i<a;i++)
    {
        if(arr[i]=='a' || arr[i]=='o' || arr[i]=='i' || arr[i]=='e' || arr[i]=='u')
        {
            currentlength++;
        }
    }
    cout<<"\n no of vowels in sentence the is-- "<<currentlength;
    return 0;
}
