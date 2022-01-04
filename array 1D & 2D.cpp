#include<iostream>
using namespace std;

int main()
{
	int a1[5]={};											//1

	for(int i=0; i<5; i++)
		cout<<a1[i]<<" ";

	cout<<endl<<endl;

	int a2[5]={1};											//2

	for(int i=0; i<5; i++)
		cout<<a2[i]<<" ";

	cout<<endl<<endl;

	int a3[5]={1, 2};										//3

	for(int i=0; i<5; i++)
		cout<<a3[i]<<" ";

	cout<<endl<<endl;

	int a4[5]={1, 2, 3, 4, 5};								//4

	for(int i=0; i<5; i++)
		cout<<a4[i]<<" ";

	cout<<endl<<endl<<endl<<endl;




	int arr1[3][3]={};										//1

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			cout<<arr1[i][j]<<" ";

		cout<<endl;
	}

	cout<<endl;

	int arr2[3][3]={1};										//2

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			cout<<arr2[i][j]<<" ";

		cout<<endl;
	}

	cout<<endl;

	int arr3[3][3]={1, 2, 3, 4};							//3

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			cout<<arr3[i][j]<<" ";

		cout<<endl;
	}

	cout<<endl;

	int arr4[3][3]={{1, 2}, {5}, {7, 8, 9}};				//4

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			cout<<arr4[i][j]<<" ";

		cout<<endl;
	}

	cout<<endl;

	int arr5[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9};				//5

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			cout<<arr5[i][j]<<" ";

		cout<<endl;
	}

	return 0;
}




/*	OUTPUT

0 0 0 0 0

1 0 0 0 0

1 2 0 0 0

1 2 3 4 5



0 0 0
0 0 0
0 0 0

1 0 0
0 0 0
0 0 0

1 2 3
4 0 0
0 0 0

1 2 0
5 0 0
7 8 9

1 2 3
4 5 6
7 8 9

*/