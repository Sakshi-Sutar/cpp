#include<iostream>
using namespace std;

#define macro_ptr char*
typedef char* typedef_ptr;

int main()
{
	macro_ptr m1, m2, m3;
	typedef_ptr t1, t2, t3;

	cout<<sizeof(m1)<<" "<<sizeof(m2)<<" "<<sizeof(m3)<<endl;
	cout<<sizeof(t1)<<" "<<sizeof(t2)<<" "<<sizeof(t3);

	return 0;
}



/*	OUTPUT

4 1 1
4 4 4

*/
