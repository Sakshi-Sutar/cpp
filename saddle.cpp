#include<iostream>
using namespace std;

void display(int mat[][3], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<mat[i][j]<<" ";

		cout<<endl;
	}
}

void saddlePoint(int mat[][3], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		int flag=0, col=0;

		int min=mat[i][0];

		for(int j=1; j<n; j++)
		{
			if(mat[i][j]<min)
			{
				min=mat[i][j];
				col=j;
			}
		}

		int max=min;

		for(int i=0; i<m; i++)
			if(mat[i][col]>max)
				flag=1;

		if(flag==0)
		{
			cout<<"Saddle Point: "<<max<<endl<<endl;
			return;
		}
	}

	cout<<"Saddle Point doesn't exist"<<endl;
}

int main()
{
	int mat1[][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int mat2[][3]={2, 7, 1, 8, 9, 3, 5, 4, 6};

	display(mat1, sizeof(mat1)/sizeof(mat1[0]), sizeof(mat1[0])/sizeof(int));
	saddlePoint(mat1, 3, 3);

	display(mat2, 3, 3);
	saddlePoint(mat2, 3, 3);

	return 0;	
}




/*	OUTPUT

1 2 3
4 5 6
7 8 9
Saddle Point: 7

2 7 1
8 9 3
5 4 6
Saddle Point doesn't exist

*/