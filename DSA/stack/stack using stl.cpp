#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    cout<<endl<<endl<<endl<<"STACK"<<endl<<endl<<endl; //works in lifo algorithm
	stack<int>st;
	st.push(2);
	st.push(0);
	st.push(7);
	st.push(25); //last in
	int stsize=st.size(); //gives size of stack
	cout<<"\n size of stack--- "<<stsize<<endl;
	cout<<"\n outputing the values...";
	for(int i=0;i<stsize;i++) //1st method of output
	{
		cout<<endl<<st.top()<<endl; //st.top gives the top element
		st.pop(); //first out
	}
	if(st.empty()==true)
	{
		cout<<endl<<"stack is empty now"<<endl;
	}
	st.push(2);
	st.push(0);
	st.push(7);
	st.push(25);
	cout<<endl<<"output 2nd method..."<<endl;
	while(st.size()!=0) //2nd way of output
	{
		cout<<endl<<st.top()<<endl;
		st.pop();
	}
    return 0;
}