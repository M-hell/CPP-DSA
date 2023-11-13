#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node* next;
	node(int value)
	{
		this->data=value;
		this->next=NULL;
	}
};
class llist
{
	private:
	node* head;
	node* tail;
	public:
	llist()
	{
		head=NULL;
		tail=NULL;	
	}	
	void insertathead(int value)
	{
		node* newnode=new node(value);
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else
		{
			newnode->next=head;
			head=newnode;
		}
	}
	void insertattail(int value)
	{
		node* newnode=new node(value);
		if(tail==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else
		{
			tail->next=newnode;
			tail=newnode;
		}
	}
	void print()
	{
		node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
};
int main()
{
	llist l;
	l.insertathead(10);
	l.insertathead(9);
	l.insertathead(8);
	l.insertattail(11);
	//l.print();
	l.insertattail(12);
	l.insertattail(13);
	l.insertathead(7);
	l.print();
}