#include<iostream>
#include<vector>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);

	int m, n;

	cin>>m>>n;

	vector<vector<int>> v(m, vector<int>(n));			//1

	for(int i=0; i<v.size(); i++)
		for(int j=0; j<v[i].size(); j++)
			v[i][j]=i+j;

	cout<<endl;

	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<v[i][j]<<" ";

		cout<<endl;
	}




	vector<vector<int>> v2(m);

	int col[]={2, 3, 1};

	for(int i=0; i<v2.size(); i++)
	{
		v2[i]=vector<int>(col[i]);						//2

		for(int j=0; j<v2[i].size(); j++)
			v2[i][j]=i+j;
	}

	cout<<endl;

	for(int i=0; i<v2.size(); i++)
	{
		for(int j=0; j<v2[i].size(); j++)
			cout<<v2[i][j]<<" ";

		cout<<endl;
	}

	cout<<"\n\n\n";




	vector<vector<int>> vec1(3, vector<int>(5));			//size specified, automatically initialized to 0

	for(vector<int> i: vec1)
	{
		for(int j: i)
			cout<<j<<" ";

		cout<<endl;
	}

	cout<<endl;

	vector<vector<int>> vec2(2, vector<int>(3));

	vec2={{8, 8, 8}, {9, 9, 9}};

	for(vector<int> i: vec2)
	{
		for(int j: i)
			cout<<j<<" ";

		cout<<endl;
	}

	cout<<endl;

	vector<vector<int>> vec3 {{1, 2, 3}, {4, 5, 6}};

	for(vector<int> i: vec3)
	{
		for(int j: i)
			cout<<j<<" ";

		cout<<endl;
	}

	return 0;
}



/*	OUTPUT

3 2

0 1
1 2
2 3

0 1
1 2 3
2



0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

8 8 8
9 9 9

1 2 3
4 5 6

*/