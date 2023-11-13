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
void middle(node *&head)
{
	node *temp1=head;
	int c=1;
	while(temp1!=NULL)
	{
		temp1=temp1->next;
		c++;
	}
	c=c-1; //at last step of loop null is also considered and c is getting updated so always the real length of list is c-1
	cout<<endl<<"length of the list= "<<c<<endl;
	int pos=1;
	node *temp2=head;
	while(pos<c/2 + 1) //formula for finding middle term is (n/2)+1 where n is no of terms
	{
		temp2=temp2->next;
		pos++;	
	}
	cout<<endl<<endl<<"middle of list is-- "<<temp2->data<<endl<<endl;
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
    cout<<endl<<"odd case..."<<endl;
    middle(head);
    insertattail(tail,16);
    print(head);
    cout<<endl<<"even case..."<<endl;
    middle(head);
    return 0;
}