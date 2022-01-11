#include<iostream>
#include<unordered_set>					//internally implemented using hash table
using namespace std;

int main()
{
	unordered_set<int> u {2, 5, 4};

	u.insert({3, 1});
	u.insert(7);
	u.insert(6);
	u.insert(7);										//only one 7 will be added

	cout<<"Size: "<<u.size()<<endl<<endl;

	for(auto i=u.begin(); i!=u.end(); i++)				//i<u.end() doesn't work
		cout<<*i<<" ";

	cout<<endl;

	for(auto i: u)
		cout<<i<<" ";



	unordered_set<int>::iterator itr=u.begin();
	advance(itr, 2);
	u.erase(itr);
	cout<<endl<<endl<<"Delete (itr at 2nd position): ";
	for(auto i: u)
		cout<<i<<" ";

	u.erase(5);
	cout<<endl<<"Delete (5): ";
	for(auto i: u)
		cout<<i<<" ";



	itr=u.find(1);
	cout<<endl<<endl<<"Find (1): ";
	(itr!=u.end()) ? cout<<"Found" : cout<<"Not found";
	
	itr=u.find(8);
	cout<<endl<<"Find (8): ";
	(itr!=u.end()) ? cout<<"Found" : cout<<"Not found";

	return 0;
}




/*	OUTPUT

Size: 7

6 5 2 4 3 1 7
6 5 2 4 3 1 7

Delete (itr at 2nd position): 6 5 4 3 1 7
Delete (5): 6 4 3 1 7

Find (1): Found
Find (8): Not found

*/





// Functions in unordered_set

// u.size()
// u.begin(), u.end()
// u.insert(val), u.erase(val or itr): use with advance(itr, pos) to move the iterator
// operator =, operator ==, operator!=: for example u2=u1; u2==u1; u2!=u1
// copy constructor, parametrized constructor: for example u2(u1); u2(u1.begin(), u1.end())
// u.empty()
// u.clear()
// u.find(val): returns itr if present, end itr if not



// Not in-built in unordered_set

// advance(itr, pos)