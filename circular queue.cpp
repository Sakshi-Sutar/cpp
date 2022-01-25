#include<iostream>
using namespace std;

class cq
{
	int crq[5]={};
	int front=-1, rear=-1, size=5;

public:
	void insert(int);
	void del();
	void display();
};

void cq::insert(int val)
{
	if(front==-1 && rear==-1)
	{
		front=0;
		crq[++rear]=val;
	}
	else if(front==(rear+1)%size)
		cout<<endl<<"Queue is full"<<endl;
	else
	{
		rear=(rear+1)%size;
		crq[rear]=val;
	}
}

void cq::del()
{
	if(front==-1 && rear==-1)
		cout<<endl<<"Queue is empty"<<endl;
	else if(front==rear)
		front=rear=-1;
	else
		front=(front+1)%size;
}

void cq::display()
{
	int i=front;

	if(front==-1 && rear==-1)
		cout<<endl<<"Queue is empty"<<endl;
	else
	{
		cout<<endl<<"Queue: ";

		while(i!=rear)
		{
			cout<<crq[i]<<" ";
			i=(i+1)%size;
		}

		cout<<crq[rear]<<endl;
	}
}

int main()
{
	cq q;

	int choice, val;

	do
	{
		cout<<endl<<"1. Insert"<<endl<<"2. Delete"<<endl<<"3. Display"<<endl<<"4. Exit"<<endl;
		cin>>choice;

		switch(choice)
		{
			case 1:
			cout<<endl<<"Value: ";
			cin>>val;
			q.insert(val);
			break;

			case 2:
			q.del();
			break;

			case 3:
			q.display();
			break;
		}

	}while(choice!=4);

	return 0;
}





/*	OUTPUT


1. Insert
2. Delete
3. Display
4. Exit
1

Value: 1

1. Insert
2. Delete
3. Display
4. Exit
1

Value: 2

1. Insert
2. Delete
3. Display
4. Exit
1

Value: 3

1. Insert
2. Delete
3. Display
4. Exit
1

Value: 4

1. Insert
2. Delete
3. Display
4. Exit
1

Value: 5

1. Insert
2. Delete
3. Display
4. Exit
1

Value: 6

Queue is full

1. Insert
2. Delete
3. Display
4. Exit
3

Queue: 1 2 3 4 5

1. Insert
2. Delete
3. Display
4. Exit
2

1. Insert
2. Delete
3. Display
4. Exit
3

Queue: 2 3 4 5

1. Insert
2. Delete
3. Display
4. Exit
2

1. Insert
2. Delete
3. Display
4. Exit
3

Queue: 3 4 5

1. Insert
2. Delete
3. Display
4. Exit
1

Value: 6

1. Insert
2. Delete
3. Display
4. Exit
3

Queue: 3 4 5 6

1. Insert
2. Delete
3. Display
4. Exit
4

*/