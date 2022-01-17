//Total number of divisors of a number

#include<bits/stdc++.h>
#define print std::cout
#define nl std::endl

int divisors(int n)
{
	int total=0;

	for(int i=1; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{	
			if(n/i==i)
			{
				std::cout<<i<<" ";
				total=total+1;
			}
			else
			{
				std::cout<<i<<" "<<n/i<<" ";
				total=total+2;
			}
		}
	}

	return total;
}

int main()
{
	int n=100,total=0;
	std::ios::sync_with_stdio(false);

	std::cout<<"Divisors of "<<n<<": ";

	total=divisors(n);

	print<<nl<<"Total number of divisors of "<<n<<": "<<total;

	return 0;
}


/*	OUTPUT

Divisors of 100: 1 100 2 50 4 25 5 20 10
Total number of divisors of 100: 9

*/