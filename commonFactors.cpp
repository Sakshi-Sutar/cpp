//Total number of Common Factors of a number

#include<bits/stdc++.h>
#define print std::cout
#define nl std::endl

int gcd(int a, int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int cf(int a, int b)
{
	int total=0;
	int n=gcd(a,b);

	for(int i=1; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				print<<i<<" ";
				total=total+1;
			}
			else
			{
				print<<i<<" "<<n/i<<" ";
				total=total+2;
			}
		}
	}

	return total;
}

int main()
{
	int a=6,b=12,total=0;

	std::ios::sync_with_stdio(false);

	print<<"Common factors of "<<a<<" and "<<b<<": ";

	total=cf(a,b);

	print<<nl<<"Total number of common factors: "<<total;

	return 0;
}


/*	OUTPUT

Common factors of 6 and 12: 1 6 2 3
Total number of common factors: 4

*/