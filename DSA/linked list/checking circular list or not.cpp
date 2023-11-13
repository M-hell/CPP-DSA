#include<bits/stdc++.h>
using namespace std;
//compiler problem
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
void insertattail(node *&tail,int data)
{
    node *temp=new node(data);
    tail->next=temp;
    tail=temp;
}
void printsingly(node *&head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void insertcircular(node *&tail,int val,int data)
{
	node *curr=tail;
	node *newnode=new node(data);
	while(val!=curr->data)
	{
		curr=curr->next;
	}
	newnode->next=curr->next;
	curr->next=newnode;
}
void printcircular(node *&tail)
{
	node *temp=tail;
	do
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}while(temp!=tail);
}
void checkcircular(node *&tail)
{
	node *temp1=tail->next;
	while(temp1!=NULL && temp1!=tail)
	{
		temp1=temp1->next;
	}
	if(temp1==NULL)
	{
		cout<<"not circular"<<endl;
	}
	if(temp1==tail)
	{
		cout<<"circular"<<endl;
	}
}
int main()
{
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
    /*insertattail(tail,11);
    insertattail(tail,12);
    printsingly(head);
	checkcircular(tail); */
    insertcircular(tail,10,11);
    insertcircular(tail,11,12);
    insertcircular(tail,12,13);
   	printcircular(tail);
   	checkcircular(tail); 
    return 0;
}