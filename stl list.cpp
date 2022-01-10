#include<iostream>
#include<list>												//doubly linked list
#include<algorithm>
using namespace std;

void display(list<int> l, list<int>::iterator itr)
{	
	for(auto i: l)
		cout<<i<<" ";
	cout<<endl;

	for(auto i=l.begin(); i!=l.end(); i++)					//i<l.end() doesn't work in case of list
		cout<<*i<<" ";
	cout<<endl;

	for(itr=l.begin(); itr!=l.end(); itr++)
		cout<<*itr<<" ";
	cout<<endl;

	cout<<endl<<"Size: "<<l.size()<<endl;

	cout<<endl<<"Head: "<<l.front();
	cout<<endl<<"Tail: "<<l.back()<<endl;

}

void insert_delete(list<int> l, list<int>::iterator itr)
{
	cout<<endl<<"Insert head (99): ";
	l.push_front(99);
	for(auto i: l)
		cout<<i<<" ";

	cout<<endl<<"Delete head: ";
	l.pop_front();
	for(auto i: l)
		cout<<i<<" ";

	cout<<endl<<endl<<"Insert tail (99): ";
	l.push_back(99);
	for(auto i: l)
		cout<<i<<" ";

	cout<<endl<<"Delete tail: ";
	l.pop_back();							
	for(auto i: l)
		cout<<i<<" ";
	cout<<endl;

	cout<<endl<<"Insert value 99 at position 2: ";
	itr=l.begin();
	advance(itr, 2);
	l.insert(itr, 99);
	for(auto i: l)
		cout<<i<<" ";

	cout<<endl<<"Delete element at Position 2: ";
	itr=l.begin();
	advance(itr, 2);
	l.erase(itr);
	for(auto i: l)
		cout<<i<<" ";
	cout<<endl;
}

void search(list<int> l, list<int>::iterator itr)
{
	itr=find(l.begin(), l.end(), 5);									//<algorithm> for find()
	if(itr!=l.end()) cout<<endl<<"Search 5: Found";
	itr=find(l.begin(), l.end(), 9);
	if(itr==l.end()) cout<<endl<<"Search 9: Not Found"<<endl;
}

void reverse(list<int> l)
{
	l.reverse();
	cout<<endl<<"Reverse: ";
	for(auto i: l)
		cout<<i<<" ";
	cout<<endl;
}

void sort(list<int> l)
{
	l.sort();													//l.sort(greater<int>()) for descending order
	cout<<endl<<"Sort: ";
	for(auto i: l)
		cout<<i<<" ";
	cout<<endl;
}

void fill(list<int> l)
{
	l.assign(l.size(), 5);										//fills array with specified value (no. of time, value)
	cout<<endl<<"Assign function: ";
	for(auto i: l)
		cout<<i<<" ";
	cout<<endl;
}

void merge(list<int> l1, list<int> l2)
{
	cout<<endl<<"l1: ";
	for(auto i: l1)
		cout<<i<<" ";
	cout<<endl<<"l2: ";
	for(auto i: l2)
		cout<<i<<" ";

	l1.merge(l2);												//takes 2 sorted list and creates new sorted list by merging them
	cout<<endl<<"Merged: ";
	for(auto i: l1)
		cout<<i<<" ";
	cout<<endl;
}

int main()
{
	list<int> l {0, 1, 2, 3}, l1 {2, 3, 5}, l2 {1, 4, 6};		//can be initialized like this; if only size specified initialized to zero; l(size, val)

	l.push_back(4);												//or declare then push values like this
	l.push_back(5);
	l.push_back(6);

	list<int>::iterator itr;									//only ++ and -- works, (itr-1) doesn't: only applicable for list (works with vectors)
	
	display(l, itr);
	insert_delete(l, itr);
	search(l, itr);
	reverse(l);
	sort(l);
	fill(l);
	merge(l1, l2);

	return 0;
}




/*	OUTPUT

0 1 2 3 4 5 6
0 1 2 3 4 5 6
0 1 2 3 4 5 6

Size: 7

Head: 0
Tail: 6

Insert head (99): 99 0 1 2 3 4 5 6
Delete head: 0 1 2 3 4 5 6

Insert tail (99): 0 1 2 3 4 5 6 99
Delete tail: 0 1 2 3 4 5 6

Insert value 99 at position 2: 0 1 99 2 3 4 5 6
Delete element at Position 2: 0 1 2 3 4 5 6

Search 5: Found
Search 9: Not Found

Reverse: 6 5 4 3 2 1 0

Sort: 0 1 2 3 4 5 6

Assign function: 5 5 5 5 5 5 5

l1: 2 3 5
l2: 1 4 6
Merged: 1 2 3 4 5 6

*/





// Functions in list

// l.size()
// l.begin(), l.end() 
// l.front(), l.back()
// l.push_back(val), l.pop_back(), l.push_front(val), l.pop_front()
// l.insert(itr, val), l.erase(itr): use with advance(itr, pos) to move the itr
// l.assign(no., val)
// operator=: for example l2=l1
// copy constructor, parametrized constructor: for example l2(l1); l2(l1.begin(), l1.end())
// l.empty(): return 1 if yes and 0 if not
// l.clear()
// l.reverse()
// l.sort(), l.sort(greater<int>())
// l1.merge(l2)



// Not in-built in list

// find(l.begin(), l.end(), search): returns itr or end itr
// advance(itr, pos)