#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int n)
{
	int max=arr[0];
	for(int i=1; i<n; i++)
		if(arr[i]>max)
			max=arr[i];

	int count[max+1]={};

	for(int i=0; i<n; i++)
		count[arr[i]]++;

	for(int i=1; i<max+1; i++)
		count[i]=count[i]+count[i-1];

	int b[n]={};
	for(int i=n-1; i>=0; i--)
		b[--count[arr[i]]]=arr[i];

	for(int i=0; i<n; i++)
		arr[i]=b[i];
}

int main()
{
	int arr[]={7, 4, 8, 9, 1, 2, 5, 1, 7};
	int n=sizeof(arr)/sizeof(arr[0]);

	sort(arr, n);

	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;
}



/*	OUTPUT

1 1 2 4 5 7 7 8 9

*/