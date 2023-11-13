#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=nullptr;
    }
};

class ll
{
    private:
    node *head=nullptr;
    node *tail=nullptr;
    public:
    void inserthead(int value)
    {
        node *newnode=new node(value);
        if(head==nullptr)
        {
            head=newnode;
            tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void inserttail(int value)
    {
        node *newnode=new node(value);
        if(tail==nullptr)
        {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void print()
    {
        node *temp=head;
        while(temp!=nullptr)
        {
            cout<<endl<<temp->data<<endl;
            temp=temp->next;
        }
    }
    void swap_pair()
    {
        node *before=head;
        while(before!=nullptr)
        {   
            node* after=before->next;
            int temp=before->data;
            before->data=after->data;
            after->data=temp;
            before=before->next->next;
        }
    }
};  
int main()
{
    ll l1;
    l1.inserthead(2);
    l1.inserthead(1);
    l1.inserttail(3);
    l1.inserttail(4);
    l1.swap_pair();
    l1.print();
    return 0;
}