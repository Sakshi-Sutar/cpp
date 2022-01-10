#include<iostream>
#include<map>							//internally implemented using self-balancing tree
using namespace std;

int main()
{
	map<int, int> m {{2, 30}, {1, 40}, {3, 60}};        //map<int, int, greater<int>> m; for descending order

	m.insert({7, 10});
	m.insert({4, 20});
	m[5]=50;
	m[6]=50;

	cout<<"Size: "<<m.size()<<endl;

	cout<<endl<<"Key     ";
	for(auto i=m.begin(); i!=m.end(); i++)				//i<m.end() doesn't work
		cout<<i->first<<"   ";							//use -> operator with pointers

	cout<<endl<<"Value   ";
	for(auto i=m.begin(); i!=m.end(); i++)
		cout<<i->second<<"  ";

	cout<<endl<<"Key     ";
	for(auto i: m)
		cout<<i.first<<"   ";							//use . operator since it is non-pointer

	cout<<endl<<"Value   ";
	for(auto i: m)
		cout<<i.second<<"  ";



	map<int, int>::iterator itr=m.begin();
	advance(itr, 2);
	m.erase(itr);

	cout<<endl<<endl<<"Delete (itr at 2nd position)";
	cout<<endl<<"Key     ";
	for(auto i=m.begin(); i!=m.end(); i++)
		cout<<i->first<<"   ";

	cout<<endl<<"Value   ";
	for(auto i=m.begin(); i!=m.end(); i++)
		cout<<i->second<<"  ";

	m.erase(7);
	cout<<endl<<endl<<"Delete (key 7)";
	cout<<endl<<"Key     ";
	for(auto i=m.begin(); i!=m.end(); i++)
		cout<<i->first<<"   ";

	cout<<endl<<"Value   ";
	for(auto i=m.begin(); i!=m.end(); i++)
		cout<<i->second<<"  ";



	itr=m.find(1);
	cout<<endl<<endl<<"Find (key 1): ";
	(itr!=m.end()) ? cout<<"Found ("<<itr->first<<", "<<itr->second<<")" : cout<<"Not found";
	
	itr=m.find(8);
	cout<<endl<<"Find (key 8): ";
	(itr!=m.end()) ? cout<<"Found ("<<itr->first<<", "<<itr->second<<")" : cout<<"Not found";



	map<int, int> m2(m);								//map<int, int, greater<int>> m2(m); for descending order

	cout<<endl<<endl<<"Copy of m in m2";
	cout<<endl<<"Key     ";
	for(auto i=m2.begin(); i!=m2.end(); i++)
		cout<<i->first<<"   ";

	cout<<endl<<"Value   ";
	for(auto i=m2.begin(); i!=m2.end(); i++)
		cout<<i->second<<"  ";

	return 0;
}




/*	OUTPUT

Size: 7

Key     1   2   3   4   5   6   7
Value   40  30  60  20  50  50  10
Key     1   2   3   4   5   6   7
Value   40  30  60  20  50  50  10

Delete (itr at 2nd position)
Key     1   2   4   5   6   7
Value   40  30  20  50  50  10

Delete (key 7)
Key     1   2   4   5   6
Value   40  30  20  50  50

Find (key 1): Found (1, 40)
Find (key 8): Not found

Copy of m in m2
Key     1   2   4   5   6
Value   40  30  20  50  50

*/





// Functions in map

// m.size()
// m.begin(), m.end()
// m.insert({key, val}), m.erase(itr or key): use with advance(itr, pos) to move the iterator
// m.at(key)
// operator =, operator []: for example m2=m1; m[key]
// copy constructor, parametrized constructor: for example m2(m1); m2(m1.begin(), m1.end())
// m.empty()
// m.clear()
// m.find(key): returns itr if present, end itr if not



// Not in-built in map

// advance(itr, pos)