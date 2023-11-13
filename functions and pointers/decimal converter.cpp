#include<bits/stdc++.h>
using namespace std;
int binary(int);
int octal(int);
int hexa(char[]);
int main()
{
    int a;
    char choice;
    char b[100];
    int i=2;
    while(i>1)
    {
    cout<<"\n enter a choice-- \n for binary to decimal press b \n for octal to decimal press o \n for hexa to decimal press h \n to exit press e \n ----";
    cin>>choice;
    if(choice=='e')
    {
    	i=0;
    	cout<<"exited from the converter.....";
	}
	else
	{
    switch(choice)
    {
        case 'b':
        cout<<"\n enter a binary number--";
        cin>>a;
        cout<<"\n"<<binary(a)<<" decimal value";
        break;
        case 'o':
        cout<<"\n enter a octal number--";
        cin>>a;
        cout<<"\n"<<octal(a)<<" decimal value";
        break;
        case 'h':
        cout<<"\n enter a hexa number--";
        cin>>b;
        cout<<"\n"<<hexa(b)<<" decimal value";
        break;
        default:
        cout<<"\n invalid input";
        break;
    }
    i++;
}
}
    return 0;
}
int binary(int n)
{
    int rem;
    int ans=0;
    int i=0;
    while(n>0)
    {
        rem=n%10;
        ans=ans+(rem*pow(2,i));
        i++;
        n=n/10;
    }
    return ans;
}
int octal(int n)
{
    int rem;
    int ans=0;
    int i=0;
    while(n>0)
    {
        rem=n%10;
        ans=ans+(rem*pow(8,i));
        i++;
        n=n/10;
    }
    return ans;
}
int hexa(char n[])
{
	int i;
    int j=0;
    int l;
    int ans=0;
    int ascii;
    int x;
    l=strlen(n);
	for(i=l-1;i>=0;i--)
	{
		ascii=int(n[i]);
		if(ascii>=48 && ascii<=57)
		{
			x=ascii-48;
			ans=ans+(x*pow(16,j));
		}
        else if(ascii>=65 && ascii<=70)
        {
                x=ascii-55;
                ans=ans+(x*pow(16,j));
        }
        j++;
	}
    return ans;
}
