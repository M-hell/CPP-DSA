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
void insertnode(node *&tail,int data)
{
    node *temp=new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
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
void reverse(node *&head)
{
    node *curr=head;
    node *copy=head;
    node *previous=NULL;
    while(curr!=NULL)
    {
        node *forward=curr->next;
        curr->next=previous;
        //previous->prev=curr; 
        previous=curr;
        curr=forward;
    }
    head=previous;
}
int main()
{
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
    insertnode(tail,11);
    insertnode(tail,12);
    insertnode(tail,13);
    insertnode(tail,14);
    insertnode(tail,15);
    cout<<endl<<"before reversing list..."<<endl;
    print(head);
    cout<<endl<<"after reversing list..."<<endl;
    reverse(head);
    print(head);
    return 0;
}