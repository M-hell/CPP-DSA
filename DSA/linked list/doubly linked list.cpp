#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(node *&head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void insertathead(node *&head,int d)
{
    node *currentnode=new node(d);
    currentnode->next=head;
    head->prev=currentnode;
    head=currentnode;
}
void insertattail(node *&tail,int d)
{
	node *currentnode=new node(d);
	tail->next=currentnode;
	currentnode->prev=tail;
	tail=currentnode;
}
void insertatmiddle(node *&head,int pos,int d)
{
	node *currentnode=new node(d);
	node *temp1=head;
	int c=1;
	while(c<pos-1)
	{
		temp1=temp1->next;
		c++;
	}
	c=1;
	node *temp2=head;
	while(c<pos)
	{
		temp2=temp2->next;
		c++;
	}
	currentnode->next=temp1->next;
	temp1->next=currentnode;
	currentnode->prev=temp1;
	temp2->prev=currentnode;
}
void deletebypos(node *&head,node *&tail,int pos)
{
	node *currentnode=head;
	int c=1;
	while(c<pos)
	{
		currentnode=currentnode->next;
		c++;
	}
	if(pos==1)
	{
		node *temp=head;
		temp=temp->next;
		head=temp;
		temp->prev=NULL;
	}
	else if(pos!=1 && currentnode->next!=NULL)
	{
		node *temp1=head;
		c=1;
		while(c<pos-1)
		{
			temp1=temp1->next;
			c++;
		}
		c=1;
		node *temp2=head;
		while(c<pos+1)
		{
			temp2=temp2->next;
			c++;
		}
		temp1->next=temp2;
		temp2->prev=temp1;
	}
	else
	{
		node *temp=head;
		c=1;
		while(c<pos-1)
		{
			temp=temp->next;
			c++;
		}
		temp->next=NULL;
		tail=temp;
	}
}
void deletebyval(node *&head,node *&tail,int d)
{
	node *temp=head;
	int c=1;
	while(temp->data!=d)
	{
		temp=temp->next;
		c++;
	}
	deletebypos(head,tail,c);
}
void length(node *&head)
{
    node *temp=head;
    int l=0;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    cout<<endl<<"length is= "<<l<<endl;
}
int main()
{
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
    insertathead(head,12);
    insertattail(tail,9);
    insertatmiddle(head,2,11);
    //deletebypos(head,tail,4);
    //deletebyval(head,tail,10);
    insertattail(tail,8);
    print(head);
    length(head);
    return 0;
}