#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertattail(node *&head,int data)
{
	node *newnode=new node(data);
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void insertathead(node *&head,int data)
{
	node *temp=new node(data);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
    	temp->next=head;
    	head=temp;
	}
}
void insertatmiddle(node *&head,int data,int pos)
{
	node *newnode=new node(data);
	node *temp=head;
	int c=1;
	while(c<pos-1)
	{
		temp=temp->next;
		c++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void deletebypos(node *&head,int pos)
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
		}
}
void deletebyval(node *&head,int data)
{
    int c=1;
    node *temp=head;
    while(temp->data!=data)
    {
        temp=temp->next;
        c++;
    }
    deletebypos(head,c);
}
void print(node *&head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<endl<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
   node *head=NULL;
   char c;
   while(true)
   {
   	cout<<"\n to enter value at tail, press t  ";
   	cout<<"\n to enter value at head, press h  ";
   	cout<<"\n to enter value at middle, press m  ";
   	cout<<"\n to delete by val press v  ";
   	cout<<"\n to delete by position press p  ";
   	cout<<"\n to print press r  ";
   	cout<<"\n to exit press e  "<<endl;
   	cin>>c;
   		if(c=='e')
   		{
   			cout<<"\n thank you....";
   			break;
		}
   	switch(c)
   	{
   		case 't':
   		cout<<"\n enter value-- ";
   		int d;
   		cin>>d;
   		insertattail(head,d);
   		break;
   		case 'h':
   		cout<<"\n enter value-- ";
   		int d1;
   		cin>>d1;
   		insertathead(head,d1);
   		break;
   		case 'r':
   		print(head);
   		break;
   		case 'v':
   		cout<<"\n enter value-- ";
   		int d2;
   		cin>>d2;
   		deletebyval(head,d2);
   		break;
   		case 'p':
   		cout<<"\n enter value-- ";
   		int d3;
   		cin>>d3;
   		deletebypos(head,d3);
   		break;
   		case 'm':
   		int pos1;
   		int d4;
   		cout<<"\n enter value and the position - ";
   		cin>>d4>>pos1;
   		insertatmiddle(head,d4,pos1);
   		break;
   	}	
}
   return 0;
}