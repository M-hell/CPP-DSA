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
void deletebypos(node *&head,node *&tail,int pos)
{
    node *currentnode=head;
    int counter=1;
    while(counter<pos)
    {
        currentnode=currentnode->next;
        counter++;
    }
    if(pos==1)
    {
        node *temp=head;
        temp=temp->next;
        head=temp;
    }
    else if(pos!=1 && currentnode->next!=NULL)
    {
        node *temp=head;
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
		node *temp=head;
		int c=1;
	while(c<pos-1)
	{
		temp=temp->next;
		c++;
	}
	temp->next=NULL;
	tail=temp;
	}
}
void deletebyval(node *&head,node *&tail,int data)
{
    int c=1;
    node *temp=head;
    while(temp->data!=data)
    {
        temp=temp->next;
        c++;
    }
    deletebypos(head,tail,c);
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
void removedup(node *&head,node *&tail) //removes duplicates in singly linked list
{
	node *curr=head;
	while(curr!=NULL)
	{
		node *compare=curr->next;
		while(compare!=NULL)
		{
			if(compare->data==curr->data)
			{
				deletebyval(head,tail,compare->data);
			}
			compare=compare->next;
		}
		curr=curr->next;
	}
	}	
int main()
{
    node *node1=new node(11);
    node *head=node1;
    node *tail=node1;
    insertathead(head,10);
    insertattail(tail,12);
    insertattail(tail,11);
    insertattail(tail,13);
    insertattail(tail,13);
    insertattail(tail,10);
    cout<<endl<<endl<<"before removing duplicates.."<<endl<<endl;
    print(head);
    removedup(head,tail);
    cout<<endl<<endl<<"after removing duplicates.."<<endl<<endl;
    print(head);
    return 0;
}