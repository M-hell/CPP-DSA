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
    void enqueue(int data)
    {
        currsize++;
        if(currsize>capacity)
        {
            cout<<endl<<"overflow"<<endl;
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
                node *temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }
            cout<<endl<<"pushed - "<<data<<endl;
        }
    }
    void dqueue()
    {
        currsize--;
        if(currsize==0)
        {
            cout<<endl<<"underflow"<<endl;
        }
        else
        {
            cout<<endl<<"popped - "<<head->data<<endl;
            head=head->next;
        }
    }
    void front()
    {
    	cout<<endl<<"front element- "<<head->data<<endl;
	}
    void isfull()
    {
    	if(currsize==capacity)
    	{
    		cout<<endl<<"full"<<endl;
		}
		else
		{
			cout<<endl<<"not full"<<endl;
		}
	}
	void isempty()
	{
		if(currsize==0)
		{
			cout<<endl<<"empty"<<endl;
		}
		else
		{
			cout<<endl<<"not empty.."<<endl;
		}
	}
	void size()
	{
		cout<<endl<<"size of queue- "<<capacity<<endl;
	}
};
int main()
{
    object o(5);
    o.enqueue(1);
    o.enqueue(2);
    o.enqueue(3);
    o.enqueue(4);
    o.enqueue(5);
    o.isfull();
    o.enqueue(6);
    o.front();
    o.isempty();
    o.dqueue();
    o.dqueue();
    o.dqueue();
    o.dqueue();
    o.dqueue();
    o.dqueue();
    o.isempty();
    o.isfull();
    o.size();
 	return 0;   
}