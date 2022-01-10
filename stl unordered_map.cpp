#include<iostream>
#include<unordered_map>						//internally implemented using hash table
using namespace std;

int main()
{
	unordered_map<int, int> u;

	u.insert({10, 100});
	u.insert({{20, 200}, {30, 300}});
	u.insert({40, 400});
	u[50]=500;
	u[60]=600;
	u[70]=700;

	cout<<"Size: "<<u.size()<<endl;

	cout<<endl<<"Key     ";
	for(auto i=u.begin(); i!=u.end(); i++)				//i<u.end() doesn't work
		cout<<i->first<<"   ";							//use -> operator with pointers

	cout<<endl<<"Value   ";
	for(auto i=u.begin(); i!=u.end(); i++)
		cout<<i->second<<"  ";

	cout<<endl<<"Key     ";
	for(auto i: u)
		cout<<i.first<<"   ";							//use . operator since it is non-pointer

	cout<<endl<<"Value   ";
	for(auto i: u)
		cout<<i.second<<"  ";



	unordered_map<int, int>::iterator itr=u.begin();
	advance(itr, 2);
	u.erase(itr);

	cout<<endl<<endl<<"Delete (itr at 2nd position)";
	cout<<endl<<"Key     ";
	for(auto i=u.begin(); i!=u.end(); i++)
		cout<<i->first<<"   ";

	cout<<endl<<"Value   ";
	for(auto i=u.begin(); i!=u.end(); i++)
		cout<<i->second<<"  ";

	u.erase(70);
	cout<<endl<<endl<<"Delete (key 70)";
	cout<<endl<<"Key     ";
	for(auto i=u.begin(); i!=u.end(); i++)
		cout<<i->first<<"   ";

	cout<<endl<<"Value   ";
	for(auto i=u.begin(); i!=u.end(); i++)
		cout<<i->second<<"  ";



	itr=u.find(10);
	cout<<endl<<endl<<"Find (key 10): ";
	(itr!=u.end()) ? cout<<"Found ("<<itr->first<<", "<<itr->second<<")" : cout<<"Not found";
	
	itr=u.find(80);
	cout<<endl<<"Find (key 80): ";
	(itr!=u.end()) ? cout<<"Found ("<<itr->first<<", "<<itr->second<<")" : cout<<"Not found";



	unordered_map<int, int> u2(u);

	cout<<endl<<endl<<"Copy of u in u2";
	cout<<endl<<"Key     ";
	for(auto i=u2.begin(); i!=u2.end(); i++)
		cout<<i->first<<"   ";

	cout<<endl<<"Value   ";
	for(auto i=u2.begin(); i!=u2.end(); i++)
		cout<<i->second<<"  ";

	return 0;
}




/*	OUTPUT

Size: 7

Key     70   60   50   10   20   30   40
Value   700  600  500  100  200  300  400
Key     70   60   50   10   20   30   40
Value   700  600  500  100  200  300  400

Delete (itr at 2nd position)
Key     70   60   10   20   30   40
Value   700  600  100  200  300  400

Delete (key 70)
Key     60   10   20   30   40
Value   600  100  200  300  400

Find (key 10): Found (10, 100)
Find (key 80): Not found

Copy of u in u2
Key     60   10   20   30   40
Value   600  100  200  300  400

*/





// Functions in unorderd_map

// u.size()
// u.begin(), u.end()
// u.insert({key, val}), u.erase(itr or key): use with advance(itr, pos) to move the iterator
// u.at(key)
// operator =, operator []: for example u2=u1; u[key]
// copy constructor, parametrized constructor: for example u2(m1); u2(u1.begin(), u1.end())
// u.empty()
// u.clear()
// u.find(key): returns itr if present, end itr if not



// Not in-built in unordered_map

// advance(itr, pos)