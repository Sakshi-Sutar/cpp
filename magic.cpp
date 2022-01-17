#include<iostream>
using namespace std;

void magicSquare()
{
	int n;
	cin>>n;

	cout<<endl<<"Magic Constant: "<<n*(n*n+1)/2<<"\n\n";

	int **arr=new int*[n];
	for(int i=0; i<n; i++)
		arr[i]=new int[n] {};

	int i=0, j=n/2;

	arr[i][j]=1;

	for(int element=2; element<=n*n; element++)
	{
		(i>0 ? i=i-1 : i=n-1);
		(j<n-1 ? j=j+1 : j=0);

		if(arr[i][j]==0)
			arr[i][j]=element;
		else
		{
			(i<n-1 ? i=i+1 : i=0);
			(j>0 ? j=j-1 : j=n-1);

			(i<n-1 ? i=i+1 : i=0);

			arr[i][j]=element;
		}
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<arr[i][j]<<" ";

		cout<<endl;
	}
}

int main()
{
	magicSquare();

	return 0;	
}




/*	OUTPUT

5

Magic Constant: 65

17 24 1 8 15
23 5 7 14 16
4 6 13 20 22
10 12 19 21 3
11 18 25 2 9

*/