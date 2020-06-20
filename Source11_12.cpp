#include<iostream>
#include<string>
using namespace std;

void main()
{
	string s = "luminousnana";
	cout << "The size of s is:" << s.size() << endl;
	cout << s << endl;

	s.resize(15, '.');
	cout << "The resize of s is :" << s.size() << endl;
	cout << s << endl;

	s.resize(10);
	cout << "The resize of s is :" << s.size() << endl;
	cout << s << endl;

	


}