#include<iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);

	int m, n;

	cin>>m>>n;

	int **arr=new int*[m];

	for(int i=0; i<m; i++)
	{	
		arr[i]=new int[n];

		for(int j=0; j<n; j++)
			cin>>arr[i][j];
	}

	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<arr[i][j]<<" ";

		cout<<endl;
	}

	cout<<endl<<endl;




	int **arr1=new int*[m];
	for(int i=0; i<m; i++)
		arr1[i]=new int[n] {};

	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<arr1[i][j]<<" ";

		cout<<endl;
	}

	cout<<endl;

	int **arr2=new int*[m];
	for(int i=0; i<m; i++)
		arr2[i]=new int[n] {1};

	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<arr2[i][j]<<" ";

		cout<<endl;
	}

	cout<<endl;

	int **arr3=new int*[m];
	for(int i=0; i<m; i++)
		arr3[i]=new int[n] {1, 2};

	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<arr3[i][j]<<" ";

		cout<<endl;
	}

	return 0;
}


/*	OUTPUT

2 4
1 2 3 4 5 6 7 8
1 2 3 4
5 6 7 8


0 0 0 0
0 0 0 0

1 0 0 0
1 0 0 0

1 2 0 0
1 2 0 0

*/