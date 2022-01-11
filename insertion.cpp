#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
	for(int i=1; i<n; i++)
	{
		int key=arr[i];
		int j=i-1;

		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}

		arr[j+1]=key;
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

1 3 4 5 7 8 9

*/