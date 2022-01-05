#include<iostream>
#include<vector>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);

	vector<int> v;

	int n;

	cin>>n;

	for(int i=0; i<n; i++)
		v.push_back(i);

	for(int i=0; i<n; i++)
		cout<<v[i]<<" ";

	cout<<endl;

	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";

	cout<<endl;

	for(auto i=v.begin(); i<v.end(); i++)
		cout<<*i<<" ";

	cout<<endl<<endl;



	vector<int> v1(3);				//size specified, automatically initialized to 0; v(5, 3)

	for(int i: v1)
		cout<<i<<" ";

	cout<<endl;

	vector<int> v2(3);

	v2={1, 3, 5};

	for(int i: v2)
		cout<<i<<" ";

	cout<<endl;

	vector<int> v3{2, 4, 6};

	for(int i: v3)
		cout<<i<<" ";

	return 0;
}



/*	OUTPUT

5
0 1 2 3 4
0 1 2 3 4
0 1 2 3 4

0 0 0
1 3 5
2 4 6

*/





// Functions in vector

// v.size()
// v.begin(), v.end() 
// v.front(), v.back()
// v.push_back(val), v.pop_back()
// v.insert(itr+2, val), v.erase(itr+2)
// v.assign(no., val)
// v.at(index)
// operator=, operator[]: for example v2=v1; v[index]
// copy constructor, parametrized constructor: for example v2(v1); v2(v1.begin(), v1.end())
// v.empty(): return 1 if yes and 0 if not
// v.clear()



// Not in-built in vector

// find(v.begin(), v.end(), search): returns itr or end itr, index=itr-v.begin()
// reverse(v.begin(), v.end())
// sort(v.begin(), v.end()) or sort(v.begin(), v.end(), greater<int>())