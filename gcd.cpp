//GCD (Greatest Common Divisor) or HCF (Highest Common Factor)

#include<bits/stdc++.h>
using namespace std;

int gcd_recursive(int a, int b)							//euclidean algorithm
{
	if(a==0)
		return b;
	return gcd_recursive(b%a,a);
}

int gcd_iterative(int a, int b)							//euclidean algorithm
{
	while(a!=0)
	{
		int x=b%a;

		b=a;

		a=x;
	}

	return b;
}

int main()
{
	int a=35, b=10;

	std::ios::sync_with_stdio(false);

	int hcf_recursive=gcd_recursive(a, b);
	int hcf_iterative=gcd_iterative(a, b);

	cout<<"hcf("<<a<<","<<b<<")="<<hcf_recursive<<"        (using recursive euclidean algorithm)"<<endl;
	cout<<"hcf("<<a<<","<<b<<")="<<hcf_iterative<<"        (using iterative euclidean algorithm)"<<endl;
	
	cout<<"hcf(35,10)="<<__gcd(35,10)<<"        (using inbuilt c++ function __gcd(m,n))";

	return 0;
}



/*	OUTPUT

hcf(35,10)=5        (using recursive euclidean algorithm)
hcf(35,10)=5        (using iterative euclidean algorithm)
hcf(35,10)=5        (using inbuilt c++ function __gcd(m,n))

*/