#include<iostream>
using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
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

	return temp;
}

int main()
{
	create();

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

*/