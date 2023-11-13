#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node* left;
	node* right;
	node(int value)
	{
		this->data=value;
		this->left=NULL;
		this->right=NULL;	
	}	
};
class bts
{
	private:
	node* head;
	public:
	bts()
	{
		head=NULL;
	}	
	void insert(int value)
	{
		node* newnode=new node(value);
		if(head==NULL)
		{
			head=newnode;
			cout<<endl<<"new node inserted.."<<endl;
		}
		else
		{
			node* temp=head; //also called root
			while(true)
			{
				if(newnode->data==temp->data)
				{
					cout<<endl<<"already in list"<<endl;
					break;
				}
				if(newnode->data < temp->data)
				{
					if(temp->left==NULL)
					{
						temp->left=newnode;
						cout<<endl<<"new node inserted.."<<endl;
						break;
					}
					temp=temp->left;
				}
				if(newnode->data > temp->data)
				{
					if(temp->right==NULL)
					{
						temp->right=newnode;
						cout<<endl<<"new node inserted.."<<endl;
						break;
					}
					temp=temp->right;
				}
			}
		}
	}
	bool contain(int value)
	{
		node* temp=head;
		if(temp==NULL)
		{
			return false;
		}
		else
		{	int c=0;
			while(temp!=NULL)
			{
				if(value==temp->data)
				{
					return true;
				}
				if(value < temp->data)
				{
					temp=temp->left;
				}
				if(value > temp->data)
				{
					temp=temp->right;
				}
			}
//			if(c!=0)
//			{
//				return true;
//			}
			return false;
		}
	}
};
int main()
{
	bts b;
	b.insert(1);
	b.insert(2);
	b.insert(3);
	b.insert(4);
	b.insert(5);
	b.insert(6);
	b.insert(7);
	b.insert(8);
	/*     to run the above statement make node* head public in bts class
	       cout<<endl<<b.head->left->right->data; 
		   this above statement can be altered to locate different nodes in the bts   */
	if(b.contain(17)==true)
	{
		cout<<endl<<"in tree"<<endl;
	}
	else
	{
		cout<<endl<<"not in tree"<<endl;
	}
	return 0;
}
