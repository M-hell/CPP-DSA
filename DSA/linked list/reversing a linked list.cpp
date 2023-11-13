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
void insertathead(node *&head,int data)
{
    node *newnode=new node(data);
    newnode->next=head;
    head=newnode;
}
void insertattail(node *&tail,int data)
{
    node *newnode=new node(data);
    tail->next=newnode;
    tail=newnode;
}
void print(node *&head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void reverse(node *&head,node *&tail)
{
	node *prev=NULL;
	node *curr=head;
	tail=head;
	while(curr!=NULL)
	{
		node *forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}
	head=prev;
}
int main()
{
    node *node1=new node(11);
    node *head=node1;
    node *tail=node1;
    insertathead(head,10);
    insertattail(tail,12);
    insertattail(tail,13);
    insertattail(tail,14);
    insertattail(tail,15);
    print(head);
    cout<<endl<<endl<<"after reversing....."<<endl<<endl;
    reverse(head,tail);
    print(head);
    return 0;
}