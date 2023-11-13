#include<bits/stdc++.h>
using namespace std;
//problem in deleting the last node
class node 
{
	public:
	int data;
	node *prev;
	node *next;
	node(int d)
	{
		this->data=d;
		this->prev=NULL;
		this->next=NULL;
	}
};
void insertnode(node *&tail,int element,int data)
{
	node *newnode=new node(data);
	node *curr=tail;
	while(curr->data!=element)
	{
		curr=curr->next;
	}
	newnode->next=curr->next;
	newnode->prev=curr;
	curr->next=newnode;
	curr->next->prev=newnode;
}
void deletebyval(node *&tail,int val)
{
	node *curr=tail;
	int c=1;
	while(curr->data!=val)
	{
		curr=curr->next;
		c++;
	}
	int pos=1;
	node *previous=tail;
	while(pos<c-1)
	{
		previous=previous->next;
		pos++;
	}
	pos=1;
	node *after=tail;
	while(pos<c+1)
	{
		after=after->next;
		pos++;
	}
	previous->next=after;
	after->prev=previous;
	if(tail==curr)
	{
		tail=after;
	}
}
void print(node *&tail)
{
	node *temp=tail;
	while(temp->next!=tail)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main()
{
	node *node1=new node(10);
	node *tail=node1;
	insertnode(tail,10,11);
	insertnode(tail,11,12);
	insertnode(tail,12,14);
	insertnode(tail,12,13);
	insertnode(tail,14,15);
	deletebyval(tail,13);
	print(tail);
	return 0;
}