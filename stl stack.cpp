#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> s;

	for(int i=0; i<5; i++)
		s.push(i);

	cout<<"Size: "<<s.size()<<endl;

	cout<<endl<<"Stack: ";

	while(!s.empty())
	{
		cout<<s.top()<<" ";

		s.pop();
	}

	return 0;
}



/*	OUTPUT

Size: 5

Stack: 4 3 2 1 0

*/




// Functions in stack

// s.size()
// s.top()
// s.push(val), s.pop()
// copy constructor: for example s2(s1)
// s.empty()