#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int min=i;

		for(int j=i+1; j<n; j++)
			if(arr[j]<arr[i])
				min=j;

		swap(arr[min], arr[i]);
	}
}

int main()
{
	std::ios::sync_with_stdio(false);

	int arr[]={3, 1, 8, 9, 5, 7, 4};
	int n=sizeof(arr)/sizeof(arr[0]);

	sort(arr, n);

	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;
}



/*	OUTPUT

1 3 4 8 5 7 9

*/