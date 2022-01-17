#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{	
	int n=49584;
	string s;
	s=to_string(n);
	cout<<endl<<s<<" "<<s[0]<<" "<<s[1]<<endl<<endl;



	int a[10] {}, arr[3][5] {};

	fill_n(a+2, 10, 3);							/* similarly for vectors: fill_n(v.begin()+itr, v.size(), 3) */

	for(int i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl<<endl;

	fill_n(&**arr+6, 15, 8);						/* fill_n(&arr[0][0], sizeof(arr)/sizeof(**arr), 8) or */

	for(int i=0; i<3; i++)							/* fill_n(&arr[0][0], sizeof(arr)/sizeof(arr[0][0]), 8) */				
	{
		for(int j=0; j<5; j++)
			cout<<arr[i][j]<<" ";

		cout<<endl;
	}



	cout<<endl<<"gcd(35, 10)="<<__gcd(35, 10)<<endl;			//<algorithm>

	int x=5, y=8;
	swap(x, y);
	cout<<endl<<"x="<<x<<", y="<<y<<endl;

	cout<<endl<<sqrt(25)<<endl;						//<cmath>

	return 0;
}




/*	OUTPUT

49584 4 9

0 0 3 3 3 3 3 3 3 3

0 0 0 0 0
0 8 8 8 8
8 8 8 8 8

gcd(35, 10)=5

x=8, y=5

5

*/
