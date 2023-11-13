#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node * next;
    node(int value){
        this->val=value;
        this->next=nullptr;
    }
};
class mergelist{
    public:
    node* head1=nullptr;
    void insertattailofl1(int value){
        node* newnode=new node(value);
        if(head1==nullptr){
            head1=newnode;
        }
        node * temp=head1;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void printl1(){
        node * temp=head1;
        while(temp!=nullptr){
            cout<<endl<<temp->val<<endl;
            temp=temp->next;
        }
    }




    node* head2=nullptr;
    void insertattailofl2(int value){
        node* newnode=new node(value);
        if(head2==nullptr){
            head2=newnode;
        }
        node * temp=head2;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void printl2(){
        node * temp=head2;
        while(temp!=nullptr){
            cout<<endl<<temp->val<<endl;
            temp=temp->next;
        }
    }






   int value=0;
        node* temp=new node(value);
    void mergesortedlist(){
        
        if(head1==nullptr){
            temp->next=head2;
        }
        if(head2==nullptr){
           temp->next=head1;
        }
        while(head1!=nullptr && head2!=nullptr){
            if(head1->val<=head2->val){
                node * storenode=new node(head1->val);
                temp->next=storenode;
                head1=head1->next;
            }
            else{
                node * storenode=new node(head2->val);
                temp->next=storenode;
                head2=head2->next;
            }
            temp=temp->next;
        }
        if(head1!=nullptr){
            temp->next=head1;
        }
        if(head2!=nullptr){
            temp->next=head2;
        }
    }
    void printmergedlist(){
        node* temp2=temp;
        while(temp2!=nullptr){
            cout<<endl<<temp2->val<<endl;
            temp2=temp2->next;
        }
        
    }
};
int main(){
    mergelist m1;
    m1.insertattailofl1(1);
    m1.insertattailofl1(2);
    m1.insertattailofl1(4);
    m1.insertattailofl2(1);
    m1.insertattailofl2(3);
    m1.insertattailofl2(4);
    cout<<endl<<"list1-"<<endl;
    m1.printl1();
    cout<<endl<<"list2-"<<endl;
    m1.printl2();
    cout<<endl<<"merged sorted list-"<<endl;
    m1.mergesortedlist();
    m1.printmergedlist();
    return 0;

}