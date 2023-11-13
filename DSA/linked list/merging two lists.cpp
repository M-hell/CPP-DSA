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
void insertnode(node *&tail,int data)
{
    node *temp=new node(data);
    tail->next=temp;
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
void merge(node *&tail,node *&head) //merges two lists
{
	tail->next=head;
}
int main()
{
    node *new1=new node(10);
    node *head1=new1;
    node *tail1=new1;
    node *new2=new node(20);
    node *head2=new2;
    node *tail2=new2;
    insertnode(tail1,11);
    insertnode(tail1,12);
    insertnode(tail1,13);
    insertnode(tail1,14);
    insertnode(tail1,15);
    insertnode(tail2,21);
    insertnode(tail2,22);
    insertnode(tail2,23);
    insertnode(tail2,24);
    insertnode(tail2,25);
    cout<<endl<<"list 1..."<<endl;
    print(head1);
    cout<<endl<<"list 2..."<<endl;
    print(head2);
    merge(tail1,head2);
    cout<<endl<<"after merging lists..."<<endl;
    print(head1);
    return 0;
}