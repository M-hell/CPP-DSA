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
class object
{
	private:
		node *head;
		int capacity;
		int currsize;
		public:
			object(int c)
			{
				this->capacity=c;
				this->currsize=0;
				this->head=NULL;
			}
void push(int data)
{
	currsize++;
	if(currsize>capacity)
	{
		cout<<endl<<"overflow..."<<endl;
	}
	else
	{
    node *newnode=new node(data);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    cout<<"pushed - "<<data<<endl;
}
}
void pop()
{
	currsize--;
	if(head==NULL)
	{
		cout<<endl<<"underflow..."<<endl;
	}
	else
	{
    cout<<"popped - "<<head->data<<endl;
    head=head->next;
}
}
void top()
{
	node *temp=head;
	cout<<"\n top element - "<<temp->data<<endl;
}
void isempty()
{
	if(head==NULL)
	{
		cout<<"\n the stack is empty...."<<endl;
	}
	else
	{
		cout<<"\n not empty..."<<endl;
	}
}
void isfull()
{
	if(currsize==capacity)
	{
		cout<<endl<<"full"<<endl;
	}
	else
	{
		cout<<endl<<"not full.."<<endl;
	}
}
void size()
{
	cout<<"\n stack size is- "<<capacity<<endl;
}
};
int main()
{
	object s1(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.isempty();
    s1.isfull();
    s1.push(40);
    s1.push(50);
    s1.isfull();
    s1.top();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.isempty();
    s1.isfull();
    s1.size();
    return 0;
}