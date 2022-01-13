#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int n)
{
	for(int gap=n/2; gap>0; gap=gap/2)
		for(int j=gap; j<n; j++)
			for(int i=j-gap; i>=0; i=i-gap)
				if(arr[i]<arr[i+gap])
					break;
				else
					swap(arr[i], arr[i+gap]);
}

int main()
{
	int arr[]={7, 4, 8, 9, 1, 2, 5};
	int n=sizeof(arr)/sizeof(arr[0]);

	sort(arr, n);

	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;
}



/*	OUTPUT

1 2 4 5 7 8 9

*/