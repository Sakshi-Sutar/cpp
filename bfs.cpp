#include<iostream>
using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
};

class queue
{
	node *q[10];
	int front, rear;

public:
	queue()
	{
		front=0;
		rear=-1;
	}

	void push(node* temp)
	{
		q[++rear]=temp;
	}

	node* pop()
	{
		node *temp=q[front++];
		return temp;
	}

	int empty()
	{
		if(front>rear)
			return 1;
		else
			return 0;
	}

	int full()
	{
		if(rear==9)
			return 1;
		else
			return 0;
	}
};

node* create()
{
	int x;

	cout<<endl<<"Enter data (-1 for no data): ";
	cin>>x;

	if(x==-1)
		return NULL;

	node *temp=new node;
	temp->data=x;

	cout<<endl<<"Enter left child of "<<x;
	temp->left=create();
	cout<<endl<<"Enter right child of "<<x;
	temp->right=create();

	return temp;												//works even without this return statement (how?)
}

void bfs(node *root)
{
	queue q;

	if(root!=NULL)
		q.push(root);

	while(!q.empty())
	{
		node *temp=q.pop();
		cout<<temp->data<<" ";

		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
	}
}

int main()
{
	node *root=create();

	cout<<endl<<"BFS Traversal: ";
	bfs(root);

	return 0;
}




/*	OUTPUT

Enter data (-1 for no data): 1

Enter left child of 1
Enter data (-1 for no data): 2

Enter left child of 2
Enter data (-1 for no data): -1

Enter right child of 2
Enter data (-1 for no data): -1

Enter right child of 1
Enter data (-1 for no data): 3

Enter left child of 3
Enter data (-1 for no data): -1

Enter right child of 3
Enter data (-1 for no data): -1

BFS Traversal: 1 2 3

*/