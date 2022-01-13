#include<bits/stdc++.h>
using namespace std;

void count(int arr[], int n, int radix)
{
	int count[10]={};

	for(int i=0; i<n; i++)
		count[(arr[i]/radix)%10]++;

	for(int i=1; i<10; i++)
		count[i]=count[i]+count[i-1];

	int b[n]={};
	for(int i=n-1; i>=0; i--)
		b[--count[(arr[i]/radix)%10]]=arr[i];

	for(int i=0; i<n; i++)
		arr[i]=b[i];
}

void sort(int arr[], int n)
{
	int max=arr[0];
	for(int i=1; i<n; i++)
		if(arr[i]>max)
			max=arr[i];

	for(int radix=1; max/radix>0; radix=radix*10)
		count(arr, n, radix);
}

int main()
{
	int arr[]={457, 54, 238, 19, 321, 42, 75};
	int n=sizeof(arr)/sizeof(arr[0]);

	sort(arr, n);

	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;
}



/*	OUTPUT

19 42 54 75 238 321 457

*/