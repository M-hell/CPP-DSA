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
void sort(node *&head) //sorts the linked list in asccending order
{
	node *curr=head;
	while(curr!=NULL)
	{
		node *compare=curr->next;
		while(compare!=NULL)
		{
			if(curr->data>compare->data) //condition for asccending order
			{
				int temp=curr->data;
				curr->data=compare->data;
				compare->data=temp;
			}
			compare=compare->next;
		}
		curr=curr->next;
	}
}
int main()
{
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
    insertattail(tail,15);
    insertattail(tail,12);
    insertattail(tail,14);
    insertattail(tail,13);
    insertattail(tail,11);
    cout<<endl<<endl<<"before sorting..."<<endl<<endl;
    print(head);
    sort(head);
    cout<<endl<<endl<<"after sorting..."<<endl<<endl;
    print(head);
    return 0;
}
