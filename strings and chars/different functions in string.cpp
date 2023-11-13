#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str1="fam";
    string str2="ily";
    cout<<str1+str2<<endl;//to add two strings by not using append
    str1.append(str2); //to add two strings using append
    cout<<str1<<endl;
    string str3="family";
    cout<<str3[2]<<endl;//accesing a particular charachter in a string array
    string str4;
    str4="family";
    cout<<str4;
    str4.clear(); //clearing the data in string completely
    cout<<str4<<endl;
    string str5="abc";
    string str6="abc";
    if(str5.compare(str6)==0) //compare function to compare if string in str5 is equal to string in str6
    {
    	cout<<"yes"<<endl;
	}
	string str7="fam";
	cout<<str7<<endl;
	str7.clear();
	if(str7.empty()==1)  //checking wether the string is empty or not
	{
		cout<<"yes the string is empty.."<<endl;
	}
	string str8="ohmygod";
	cout<<str8<<endl;
	str8.erase(2,3); //it erases upto starting from 2nd charachter to next to 3 charachter output will be 'ohod'
	cout<<str8<<endl;
	string str9="heylisten";
	cout<<str9.find("list")<<endl;//here find function returns the element position from the string if it finds it output will be 3 .. if it doesn't find the element it gives a garbage value
	string str10="igod";
	cout<<str10<<endl;
	str10.insert(1,"am");//inserts before the 1st element in string array the text 'am'
	cout<<str10<<endl;
	string str11="hello";
	cout<<str11.size()<<endl;//gives the size of string
	int l=str11.size();
	for(int i=0;i<l;i++)
	{
		cout<<str11[i]<<endl;
	}
	string str12="hello";
	string str13;
	str13=str12.substr(1,2);//gives us a string of two elements consisting 1 st element i.e. 'e' and 2nd element 'l'
	cout<<str13<<endl;
	string str14="214";
    int x;
    x=stoi(str14);
    cout<<x<<endl;
	string str15="dcba";
	sort(str15.begin(),str15.end());//sorts string alphabetically algorithm header file must be used
	cout<<str15<<endl;
	string hi="baby";
	hi.append("sona");
	cout<<endl<<endl<<endl<<endl<<hi;
    return 0;
}
