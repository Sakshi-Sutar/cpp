#include<iostream>
using namespace std;

void maxHeapify(int arr[], int n, int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;

	if(l<n && arr[l]>arr[largest])
		largest=l;
	if(r<n && arr[r]>arr[largest])
		largest=r;

	if(largest!=i)
	{
		swap(arr[i], arr[largest]);
		maxHeapify(arr, n, largest);
	}
}

void sort(int arr[], int n)
{
	for(int i=n/2-1; i>=0; i--)
		maxHeapify(arr, n, i);

	for(int i=n-1; i>=0; i--)
	{
		swap(arr[i], arr[0]);
		maxHeapify(arr, i, 0);
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