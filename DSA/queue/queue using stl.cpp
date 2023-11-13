#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	queue<int>qu;
	qu.push(23);
	qu.push(67);
	qu.push(46);
	qu.push(65);//first in 
	qu.pop(); //first out
	cout<<"\n front-- "<<qu.front()<<endl;//gives the value at front
	cout<<"\n back-- "<<qu.back()<<endl;//gives the value at back
	while(qu.size()!=0) //gives the size
	{
		cout<<endl<<qu.front()<<endl;
		qu.pop();
	}
	qu.empty();//deletes the queue
	cout<<endl<<"after emptying queue.."<<endl;
	while(qu.size()!=0) 
	{
		cout<<endl<<qu.front()<<endl;
		qu.pop();
	}
	if(qu.empty()==true)
	{
		cout<<endl<<"queue is empty now.."<<endl;
	}
	return 0;
}