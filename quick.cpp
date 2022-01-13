#include<iostream>
using namespace std;

int quick(int arr[], int start, int end, int pivot)
{
	while(start<end)
	{
		while(arr[start]<=arr[pivot])
			start++;
		while(arr[end]>arr[pivot])
			end--;

		if(start<end)
			swap(arr[start], arr[end]);
	}

	swap(arr[pivot], arr[end]);

	return end;
}

void sort(int arr[], int start, int end)
{
	if(start<end)
	{
		int pivot=start;

		int partition=quick(arr, start, end, pivot);

		sort(arr, start, partition-1);
		sort(arr, partition+1, end);
	}
}

int main()
{
	std::ios::sync_with_stdio(false);

	int arr[]={3, 1, 8, 9, 5, 7, 4};
	int n=sizeof(arr)/sizeof(arr[0]);

	sort(arr, 0, n-1);

	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;
}



/*	OUTPUT

1 3 4 5 7 8 9

*/