#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a[]={1, 2, 3, 4, 5, 6, 7};

	for(int i: a)
		cout<<i<<" ";

	cout<<endl<<endl;

	for(int &i: a)
		cout<<i<<" ";

	cout<<endl<<endl;

	for(int &i: a)								//reference needs to be used to assign values
		i=i+1;

	for(int i: a)
		cout<<i<<" ";

	cout<<"\n\n\n\n";



	int arr[][4]={1, 2, 3, 4, 5, 6, 7, 8};					//array of 2 elements of type array, each with 4 elements

	for(auto &i: arr)							//references to the 2 arrays							
	{
		for(int j: i)							//loops over each of the 4 elements inside those 2 arrays
			cout<<j<<" ";

		cout<<endl;
	}

	cout<<endl;

	for(auto &i: arr)						
	{
		for(int &j: i)
			cout<<j<<" ";

		cout<<endl;
	}

	cout<<endl;

	for(auto &i: arr)
		for(int &j: i)							//reference for assignment
			j=j+1;

	for(auto &i: arr)						
	{
		for(int j: i)
			cout<<j<<" ";

		cout<<endl;
	}

	cout<<"\n\n\n";								//NOTE: foreach loop is not for dynamic arrays since only beginning is known but not the end



	string str="hello";

	for(char i: str)							//char because string type gives error
		cout<<i<<" ";

	cout<<"\n\n\n\n";



	vector<int> v(7,0);

	for(int i: v)								//1D vector foreach loop
		cout<<i<<" ";
	cout<<endl<<endl;

	for(int &i: v)								//reference for assignment
		i++;

	for(int i: v)
		cout<<i<<" ";

	cout<<"\n\n\n\n";

	

	vector<vector<int>> vec(3, vector<int>(5, 0));

	for(vector<int> i: vec)							//2D vector foreach loop
	{
		for(int j: i)
			cout<<j<<" ";

		cout<<endl;
	}

	cout<<endl;

	for(vector<int> &i: vec)						//references for assignment
		for(int &j: i)
			j++;

	for(vector<int> i: vec)
	{
		for(int j: i)
			cout<<j<<" ";

		cout<<endl;
	}

	return 0;
}




/*	OUTPUT

1 2 3 4 5 6 7

1 2 3 4 5 6 7

2 3 4 5 6 7 8



1 2 3 4
5 6 7 8

1 2 3 4
5 6 7 8

2 3 4 5
6 7 8 9



h e l l o



0 0 0 0 0 0 0

1 1 1 1 1 1 1



0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

1 1 1 1 1
1 1 1 1 1
1 1 1 1 1

*/
