#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
void insertanode(node *&tail,int element,int d)
{
	node *newnode=new node(d);
	node *temp=tail;
	while(temp->data!=element)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
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
	node *prev=tail;
	int pos=1;
	while(pos<c-1)
	{
		prev=prev->next;
		pos++;
	}
 	node *after=tail;
 	pos=1;
 	while(pos<c+1)
 	{
 		after=after->next;
 		pos++;
	}
	prev->next=after;
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
    insertanode(tail,10,11);
    insertanode(tail,11,12);
    insertanode(tail,12,13);
    insertanode(tail,13,14);
    insertanode(tail,14,15);
    //deletebyval(tail,15);
    print(tail);
    return 0;
}