#include<iostream>
using namespace std;

int biRcr(int arr[], int l, int r, int search)
{
	if(l<=r)
	{
		int mid=(l+r)/2;

		if(search==arr[mid])
			return mid;
		else if(search<arr[mid])
			return biRcr(arr, l, mid-1, search);
		else
			return biRcr(arr, mid+1, r, search);
	}

	return -1;
}

void bi(int arr[], int n, int search)
{
	int l=0, r=n-1;

	while(l<=r)
	{
		int mid=(l+r)/2;

		if(search==arr[mid])
		{
			cout<<"found: "<<mid<<endl;
			return;
		}
		else if(search<arr[mid])
			r=mid-1;
		else
			l=mid+1;
	}

	cout<<"not found"<<endl;
}

int main()
{
	std::ios::sync_with_stdio(false);

	int arr[]={1, 3, 4, 5, 7, 8, 9};
	int n=sizeof(arr)/sizeof(arr[0]);

	bi(arr, n, 8);
	bi(arr, n, 10);

	cout<<endl;

	int index=biRcr(arr, 0, n-1, 1);
	(index==-1) ? cout<<"not found"<<endl : cout<<"found: "<<index<<endl;

	index=biRcr(arr, 0, n-1, 10);
	(index==-1) ? cout<<"not found"<<endl : cout<<"found: "<<index<<endl;

	return 0;
}



/*	OUTPUT

found: 5
not found

found: 0
not found

*/