#include<iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);

	int n;

	cin>>n;

	int *arr=new int[n];

	for(int i=0; i<n; i++)
		cin>>arr[i];

	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	cout<<endl<<endl;



	int *arr1=new int[n] {};
	for(int i=0; i<n; i++)
		cout<<arr1[i]<<" ";
	cout<<endl;

	int *arr2=new int[n] {1};
	for(int i=0; i<n; i++)
		cout<<arr2[i]<<" ";
	cout<<endl;

	int *arr3=new int[n] {1,2};
	for(int i=0; i<n; i++)
		cout<<arr3[i]<<" ";
	cout<<endl;

	return 0;
}



/*	OUTPUT

5
1 2 3 4 5
1 2 3 4 5

0 0 0 0 0
1 0 0 0 0
1 2 0 0 0

*/