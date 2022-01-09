#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class linkedList
{
	node *head, *temp, *currentNode;

public:
	linkedList()
	{
		head=NULL;
	}
	void create();
	void display();
	void count();
	void insertHead(int);
	void deleteHead();
	void insertLast(int);
	void deleteLast();
	void insertBetween(int);
	void deleteBetween(int);
	void search(int);
	void reverse();
	void sort();
	void merge(linkedList, linkedList);
};

void linkedList::create()
{
	int i=0;

	while(i<7)
	{
		temp=new node;
		temp->data=i;
		temp->next=NULL;

		if(head==NULL)
			head=temp;
		else
		{
			currentNode=head;

			while(currentNode->next!=NULL)
				currentNode=currentNode->next;

			currentNode->next=temp;
		}

		i++;
	}

	cout<<"Linked list created: ";
}

void linkedList::display()
{
	currentNode=head;

	while(currentNode!=NULL)
	{
		cout<<currentNode->data<<" ";
		currentNode=currentNode->next;
	}

	cout<<endl;
}

void linkedList::count()
{
	int count=0;

	currentNode=head;

	while(currentNode!=NULL)
	{
		count++;
		currentNode=currentNode->next;
	}

	cout<<endl<<"Size: "<<count<<endl;
}

void linkedList::insertHead(int newHead)
{
	temp=new node;
	temp->data=newHead;
	temp->next=head;
	head=temp;

	cout<<endl<<"Insert head ("<<newHead<<"): ";
}

void linkedList::deleteHead()
{
	currentNode=head;
	head=head->next;
	currentNode->next=NULL;
	delete currentNode;

	cout<<"Delete head: ";
}

void linkedList::insertLast(int last)
{
	temp=new node;
	temp->data=last;
	temp->next=NULL;

	currentNode=head;

	while(currentNode->next!=NULL)
		currentNode=currentNode->next;

	currentNode->next=temp;

	cout<<endl<<"Insert last ("<<last<<"): ";
}

void linkedList::deleteLast()
{
	currentNode=head;
	temp=head->next;

	while(temp->next!=NULL)
	{
		currentNode=currentNode->next;
		temp=temp->next;
	}

	currentNode->next=NULL;
	delete temp;

	cout<<"Delete last: ";
}

void linkedList::insertBetween(int index)
{
	int i=1;

	node *btw=new node;
	btw->data=99;
	btw->next=NULL;

	currentNode=head;
	temp=head->next;

	while(i!=index)
	{
		currentNode=currentNode->next;
		temp=temp->next;
		i++;
	}

	currentNode->next=btw;
	btw->next=temp;

	cout<<endl<<"New element 99 inserted at index "<<index<<": ";
}

void linkedList::deleteBetween(int index)
{
	int i=1;

	currentNode=head;
	temp=head->next;

	while(i!=index)
	{
		currentNode=currentNode->next;
		temp=temp->next;
		i++;
	}

	currentNode->next=temp->next;
	temp->next=NULL;
	delete temp;

	cout<<"Element at index "<<index<<" deleted: ";
}

void linkedList::search(int find)
{
	int index=0;
	currentNode=head;

	while(currentNode!=NULL)
	{
		if(currentNode->data==find)
		{
			cout<<endl<<"Search "<<find<<": Found at index "<<index;
			return;
		}
		
		currentNode=currentNode->next;
		index++;
	}

	cout<<endl<<"Search "<<find<<": Not Found"<<endl;
}

void linkedList::reverse()
{
	node *p, *q, *r;

	p=head;
	q=p->next;
	r=q->next;

	p->next=NULL;
	q->next=p;

	while(r!=NULL)
	{
		p=q;
		q=r;
		r=r->next;

		q->next=p;
	}

	head=q;

	cout<<endl<<"Reverse: ";
}

void linkedList::sort()
{
	for(node *i=head; i->next!=NULL; i=i->next)
		for(node *j=i->next; j!=NULL; j=j->next)
			if(i->data>j->data)
				swap(i->data, j->data);

	cout<<endl<<"Sort: ";
}

void linkedList::merge(linkedList l1, linkedList l2)
{
	cout<<endl;

	l1.create();
	l1.display();
	l2.create();
	l2.display();

	if(l1.head->data<l2.head->data)
	{
		head=l1.head;
		l1.head=l1.head->next;
	}
	else
	{
		head=l2.head;
		l2.head=l2.head->next;
	}

	temp=head;

	while(l1.head!=NULL && l2.head!=NULL)
	{
		if(l1.head->data<=l2.head->data)
		{
			temp->next=l1.head;
			l1.head=l1.head->next;
			temp=temp->next;
		}
		else
		{
			temp->next=l2.head;
			l2.head=l2.head->next;
			temp=temp->next;
		}
	}

	while(l1.head!=NULL)
	{
		temp->next=l1.head;
		l1.head=l1.head->next;
		temp=temp->next;
	}

	while(l2.head!=NULL)
	{
		temp->next=l2.head;
		l2.head=l2.head->next;
		temp=temp->next;
	}

	cout<<"Merged: ";
}

int main()
{
	linkedList l;

	l.create();
	l.display();

	l.count();

	l.insertHead(99);
	l.display();

	l.deleteHead();
	l.display();

	l.insertLast(99);
	l.display();

	l.deleteLast();
	l.display();

	l.insertBetween(6);
	l.display();

	l.deleteBetween(6);
	l.display();

	l.search(3);
	l.search(8);

	l.reverse();
	l.display();

	l.sort();
	l.display();

	linkedList mergedList, l1, l2;
	mergedList.merge(l1, l2);
	mergedList.display();

	return 0;
}




/*	OUTPUT

Linked list created: 0 1 2 3 4 5 6

Size: 7

Insert head (99): 99 0 1 2 3 4 5 6
Delete head: 0 1 2 3 4 5 6

Insert last (99): 0 1 2 3 4 5 6 99
Delete last: 0 1 2 3 4 5 6

New element 99 inserted at index 6: 0 1 2 3 4 5 99 6
Element at index 6 deleted: 0 1 2 3 4 5 6

Search 3: Found at index 3
Search 8: Not Found

Reverse: 6 5 4 3 2 1 0

Sort: 0 1 2 3 4 5 6

Linked list created: 0 1 2 3 4 5 6
Linked list created: 0 1 2 3 4 5 6
Merged: 0 0 1 1 2 2 3 3 4 4 5 5 6 6

*/