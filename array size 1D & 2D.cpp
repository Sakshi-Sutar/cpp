#include<iostream>
using namespace std;

int main()	
{
	int arr[]={1, 2, 3, 4, 5, 6, 7};

	int size=sizeof(arr)/sizeof(arr[0]);			//such array size calculation is not possible when array is passed to a function since array is 
	cout<<size<<endl<<endl;							//passed as a pointer not as an array so information about size is lost



	int mat1[][3]={{1, 2}, {4, 5, 6}};
	int mat2[][3]={2, 7, 1, 8, 9, 3};

	int m=sizeof(mat1)/sizeof(mat1[0]);				//above point applicable for both 1D and 2D array
	int n=sizeof(mat1[0])/sizeof(int);
	cout<<m<<" "<<n<<endl;

	m=sizeof(mat2)/sizeof(mat2[0]);
	n=sizeof(mat2[0])/sizeof(int);
	cout<<m<<" "<<n<<endl;

	return 0;	
}



/*	OUTPUT

7

2 3
2 3

*/