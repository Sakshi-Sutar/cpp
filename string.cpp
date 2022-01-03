#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string str;									//<string> not necessary to declare 'string' object
	char arr[10];

	cin>>str>>arr;
	cout<<"String: "<<str<<endl<<"Char array: "<<arr<<endl;

	cout<<endl<<"With Spaces"<<endl;
	getline(cin, str);								//no library needed for getline()
	getline(cin, str);
	cin.getline(arr, 10);
	cout<<"String: "<<str<<endl<<"Char array: "<<arr<<"\n\n\n";




	string str1, str2;

	cout<<endl<<"String with compare()"<<endl;

	str1="hello", str2="bye";

	int c=str1.compare(str2);							//no library needed for compare() - only works with 'string' object
	cout<<c<<endl;

	c=str2.compare(str1);
	cout<<c<<endl;

	c=str1.compare(str1);
	cout<<c<<endl;

	cout<<endl<<"Char Array with strcmp()"<<endl;

	char arr1[]="hello", arr2[]="bye";

	c=strcmp(arr1, arr2);								//<cstring> must be included for strcmp() - only works with 'char' []
	cout<<c<<endl;

	c=strcmp(arr2, arr1);
	cout<<c<<endl;

	c=strcmp(arr1, arr1);
	cout<<c<<endl;

	return 0;
}




/*	OUTPUT

one two
String: one
Char array: two

With Spaces
new delhi
new york
String: new delhi
Char array: new york



String with compare()
1
-1
0

Char Array with strcmp()
1
-1
0

*/










/*if(str1<str2)						//this block works only for 'string' object, doesn't work for char[]
	c=-1;	
else if(str1==str2)
	c=0;
else
	c=1;

cout<<c<<endl;*/




/*string str1, str2;
str1="one", str2="two";
str1=three, str2="four";				//assignment possible for string object

char arr1[10], arr2[10];
arr1="hello", arr2="bye";				//such assignment doesn't work for char[], only initialization possible

char arr1[]="hello", arr2[]="bye";*/			//initialization of char[]
