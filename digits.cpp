#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=10845;

	int a=n;

	while(a!=0)
	{
		cout<<a%10<<" ";

		a=a/10;
	}

	return 0;
}



/*	OUTPUT

5 4 8 0 1

*/