#include<iostream>
using namespace std;

void square(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<"* ";

		cout<<endl;
	}

	cout<<endl;
}

void pyramidLeft(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
			cout<<"* ";

		cout<<endl;
	}

	cout<<endl;
}

void pyramidRight(int n)
{
	int spaces=2*n-2;

	for(int i=0; i<n; i++)
	{
		for(int k=0; k<spaces; k++)
			cout<<" ";

		spaces=spaces-2;

		for(int j=0; j<=i; j++)
			cout<<"* ";

		cout<<endl;
	}

	cout<<endl;
}

void triangle(int n)
{
	int spaces=(n/2)*2;

	for(int i=0; i<n; i++)
	{
		for(int k=0; k<spaces; k++)
			cout<<" ";

		spaces=spaces-1;

		for(int j=0; j<=i; j++)
			cout<<"* ";

		cout<<endl;
	}

	cout<<endl;
}

void pyramidLeft_inverted(int n)
{
	for(int i=n; i>0; i--)
	{
		for(int j=0; j<i; j++)
			cout<<"* ";

		cout<<endl;
	}

	cout<<endl;
}

void pyramidRight_inverted(int n)
{
	int spaces=0;

	for(int i=n; i>0; i--)
	{
		for(int k=0; k<spaces; k++)
			cout<<" ";

		spaces=spaces+2;

		for(int j=0; j<i; j++)
			cout<<"* ";

		cout<<endl;
	}

	cout<<endl;
}

void triangle_inverted(int n)
{
	int spaces=0;

	for(int i=n; i>0; i--)
	{
		for(int k=0; k<spaces; k++)
			cout<<" ";

		spaces=spaces+1;

		for(int j=0; j<i; j++)
			cout<<"* ";

		cout<<endl;
	}

	cout<<endl;
}

void diamond(int n)
{
	int spaces=(n/2)*2;

	for(int i=0; i<n; i++)
	{
		for(int k=0; k<spaces; k++)
			cout<<" ";

		spaces=spaces-1;

		for(int j=0; j<=i; j++)
			cout<<"* ";

		cout<<endl;
	}

	spaces=1;

	for(int i=n-1; i>0; i--)
	{
		for(int k=1; k<=spaces; k++)
			cout<<" ";

		spaces=spaces+1;

		for(int j=0; j<i; j++)
			cout<<"* ";

		cout<<endl;
	}
}

int main()
{
	int n=5;

	square(n);
	pyramidLeft(n);
	pyramidRight(n);
	triangle(n);
	pyramidLeft_inverted(n);
	pyramidRight_inverted(n);
	triangle_inverted(n);
	diamond(n);

	return 0;
}



/*	OUTPUT

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*
* *
* * *
* * * *
* * * * *

        *
      * *
    * * *
  * * * *
* * * * *

    *
   * *
  * * *
 * * * *
* * * * *

* * * * *
* * * *
* * *
* *
*

* * * * *
  * * * *
    * * *
      * *
        *

* * * * *
 * * * *
  * * *
   * *
    *

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/