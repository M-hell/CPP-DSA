#include<bits/stdc++.h>
using namespace std;
class node //making an object called node which stores the data and pointer to next node
{
	public:
    int data;
    node *next;
    node(int data) //const to declare the value of 1st node pointer null
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(node *&head,int data) //inserts value at head
{
	node *temp=new node(data);
	temp->next=head;
	head=temp;
}
void insertattail(node *&tail,int data) //inserts value at tail
{
	node *temp=new node(data);
	tail->next=temp;
	tail=temp;
}
void insertatmiddle(node *&head,int pos,int data) //inserts value at middle
{
	int c=1;
	node *temp=head;
	while(c<pos-1)
	{
		c++;
		temp=temp->next;
	}
	node *temp1=new node(data);
	temp1->next=temp->next;
	temp->next=temp1;
}
void print(node *&head) //prints the value
{
	node *temp;
	temp=head;
	while(temp != NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
void deletebypos(node *&head,node *&tail,int pos) //deletes the node based on position given by user
{
	node *current=head;
	int counter=1;
	while(counter<pos)
	{
		current=current->next;
		counter++;
	}
	node *temp=head;
	if(pos==1) //deletes if pos is 1st
	{
		temp=temp->next;
		head=temp;
	}
	else if(pos!=1 && current->next!=NULL) //deletes if position is middle
	{
	int c=1;
	while(c<pos-1)
	{
		temp=temp->next;
		c++;
	}
	node *temp1=head;
	int ct=1;
	while(ct<pos+1)
	{
		temp1=temp1->next;
		ct++;
	}
	temp->next=temp1;
	}
	else //deletes if position is last
	{
		node *temp1=head;
		int c=1;
	while(c<pos-1)
	{
		temp1=temp1->next;
		c++;
	}
	temp1->next=NULL;
	tail=temp1;
	}
}
void deletebyval(node *&head,node *&tail,int data) //deletes the node based on the data given by user
{
	node *check=head;
	int counter=1;
	while(check->data != data) //checking the position based on value
	{
		check=check->next;
		counter++;
	}
	int pos=counter;
	node *temp=head;
	if(pos==1)
	{
		temp=temp->next;
		head=temp;
	}
	else if(pos!=1 && temp->next!=NULL)
	{
	int c=1;
	while(c<pos-1)
	{
		temp=temp->next;
		c++;
	}
	node *temp1=head;
	int ct=1;
	while(ct<pos+1)
	{
		temp1=temp1->next;
		ct++;
	}
	temp->next=temp1;
	}
	else
	{
		node *temp1=head;
		int c=1;
	while(c<pos-1)
	{
		temp1=temp1->next;
		c++;
	}
	temp1->next=NULL;
	tail=temp1;
	}
}
int main()
{
    node *node1=new node(10); //creating the 1st node a storing a value
    node *head=node1;
    node *tail=node1;
    insertathead(head,15); //inserting values at head
    insertathead(head,20);
    insertathead(head,30);
    insertattail(tail,5); //inserting value at tail
    insertattail(tail,0);
    insertatmiddle(head,2,25); //inserting value at middle
    deletebypos(head,tail,3); //deleting value of position 3
    deletebyval(head,tail,30); //deleting value 30
    print(head);
    return 0;
}