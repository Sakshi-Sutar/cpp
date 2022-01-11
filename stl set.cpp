#include<iostream>
#include<set>							//internally implemented using self-balancing tree
using namespace std;

int main()
{
	set<int> s {2, 5, 4};								//set<int, greater<int>> s; for descending order

	s.insert({3, 1});
	s.insert(7);
	s.insert(6);
	s.insert(7);										//only one 7 will be added

	cout<<"Size: "<<s.size()<<endl<<endl;

	for(auto i=s.begin(); i!=s.end(); i++)				//i<s.end() doesn't work
		cout<<*i<<" ";

	cout<<endl;

	for(auto i: s)
		cout<<i<<" ";



	set<int>::iterator itr=s.begin();
	advance(itr, 2);
	s.erase(itr);
	cout<<endl<<endl<<"Delete (itr at 2nd position): ";
	for(auto i: s)
		cout<<i<<" ";

	s.erase(5);
	cout<<endl<<"Delete (5): ";
	for(auto i: s)
		cout<<i<<" ";



	itr=s.find(1);
	cout<<endl<<endl<<"Find (1): ";
	(itr!=s.end()) ? cout<<"Found" : cout<<"Not found";
	
	itr=s.find(8);
	cout<<endl<<"Find (8): ";
	(itr!=s.end()) ? cout<<"Found" : cout<<"Not found";

	return 0;
}




/*	OUTPUT

Size: 7

1 2 3 4 5 6 7
1 2 3 4 5 6 7

Delete (itr at 2nd position): 1 2 4 5 6 7
Delete (5): 1 2 4 6 7

Find (1): Found
Find (8): Not found

*/





// Functions in set

// s.size()
// s.begin(), s.end()
// s.insert(val), s.erase(val or itr): use with advance(itr, pos) to move the iterator
// operator =: for example s2=s1;
// copy constructor, parametrized constructor: for example s2(s1); s2(s1.begin(), s1.end())
// s.empty()
// s.clear()
// s.find(val): returns itr if present, end itr if not



// Not in-built in set

// advance(itr, pos)