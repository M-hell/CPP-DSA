#include<bits/stdc++.h>
using namespace std;
int recursionasc(int);
int recursiondsc(int);
int main()
{
    int n;
    cout<<"\n enter a number-- ";
    cin>>n;
    char choice;
    cout<<"\n for asscending order press 'a' for decending order press 'd'= ";
    cin>>choice;
    switch (choice)
    {
    case 'a':
    {
        cout<<endl;
        recursionasc(n);
        break;
    }
    case 'd':
    {
        cout<<endl;
        recursiondsc(n);
        break;
    }
    default:
    {
        cout<<"\n invalid choice";
        break;
    }
    }
    return 0;
}
int recursionasc(int n)
{
    int prev;
    if(n==-1)
    {
        return 0;
    }
    prev=recursionasc(n-1);
    cout<<n<<endl;
    return prev;
}
int recursiondsc(int n)
{
	if(n==-1)
	{
		return 0;
	}
	cout<<n<<endl;
	int prev=recursiondsc(n-1);
	return prev;
}
