#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> dq;							//similar initialization like vector and list possible; dq(5), dq(5, 3), dq {1, 2, 3}

	deque<int>::iterator itr;

	for(int i=0; i<5; i++)
		dq.push_back(i);

	cout<<"Size: "<<dq.size()<<endl;
	cout<<endl<<"Front: "<<dq.front();
	cout<<endl<<"Back: "<<dq.back()<<endl<<endl;

	for(itr=dq.begin(); itr<dq.end(); itr++)
		cout<<*itr<<" ";
	cout<<endl;
	for(auto i=dq.begin(); i<dq.end(); i++)
		cout<<*i<<" ";

	cout<<endl<<endl<<"At(2): "<<dq.at(2)<<endl;			//dq[2] can also be used (same for vectors both at(index) and v[index] can be used) 

	dq.push_back(99);
	cout<<endl<<"Push Back(99): ";
	for(auto i: dq)
		cout<<i<<" ";

	dq.pop_back();
	cout<<endl<<"Pop Back: ";
	for(auto i: dq)
		cout<<i<<" ";

	dq.push_front(99);
	cout<<endl<<endl<<"Push Front(99): ";
	for(auto i: dq)
		cout<<i<<" ";

	dq.pop_front();
	cout<<endl<<"Pop Front: ";
	for(auto i: dq)
		cout<<i<<" ";

	return 0;
}




/*	OUTPUT

Size: 5

Front: 0
Back: 4

0 1 2 3 4
0 1 2 3 4

At(2): 2

Push Back(99): 0 1 2 3 4 99
Pop Back: 0 1 2 3 4

Push Front(99): 99 0 1 2 3 4
Pop Front: 0 1 2 3 4

*/





// Functions in deque

// dq.size()
// dq.begin(), dq.end() 
// dq.front(), dq.back()
// dq.push_back(val), dq.pop_back(), dq.push_front(val), dq.pop_front()
// dq.insert(itr+2, val), dq.erase(itr+2)
// dq.assign(no., val)
// dq.at(pos)
// operator=, operator[]: for example dq2=dq1; dq[pos]
// copy constructor, parametrized constructor: for example dq2(dq1); dq2(dq1.begin(), dq1.end())
// dq.empty(): return 1 if yes and 0 if not
// dq.clear()



// Not in-built in deque

// find(dq.begin(), dq.end(), search): returns itr or end itr
// reverse(dq.begin(), dq.end())
// sort(dq.begin(), dq.end()) or sort(dq.begin(), dq.end(), greater<int>())
