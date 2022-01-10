#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> q;

	for(int i=0; i<5; i++)
		q.push(i);

	cout<<"Size: "<<q.size()<<endl;
	cout<<endl<<"Front: "<<q.front();
	cout<<endl<<"Back: "<<q.back()<<endl;

	cout<<endl<<"Queue: ";

	while(!q.empty())
	{
		cout<<q.front()<<" ";

		q.pop();
	}
	
	return 0;
}



/*	OUTPUT

Size: 5

Front: 0
Back: 4

Queue: 0 1 2 3 4

*/




// Functions of Queue

// q.size()
// q.front(), q.back()
// q.push(val), q.pop()
// copy constructor: for example q2(q1)
// q.empty()