#include<iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub)
{
	int n1=mid-lb+1;
	int n2=ub-mid;

	int l[n1], r[n2];

	for(int i=0; i<n1; i++)
		l[i]=arr[lb+i];

	for(int i=0; i<n2; i++)
		r[i]=arr[mid+1+i];

	int i=0, j=0, k=lb;

	while(i<n1 && j<n2)
	{
		if(l[i]<r[j])
		{
			arr[k]=l[i];
			i++;
		}
		else
		{
			arr[k]=r[j];
			j++;
		}

		k++;
	}

	while(i<n1)
	{
		arr[k]=l[i];
		i++;
		k++;
	}

	while(j<n2)
	{
		arr[k]=r[j];
		j++;
		k++;
	}
}

void sort(int arr[], int lb, int ub)
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2;

		sort(arr, lb, mid);
		sort(arr, mid+1, ub);
		merge(arr, lb, mid, ub);
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