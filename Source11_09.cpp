#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s("1234567890");
	cout << "The length of s is :" << s.length() << endl;
	cout << "The size of s is :" << s.size() << endl;
	cout << "The max size of s is :" << s.max_size() << endl;
	cout << "The capacity of s is :" << s.capacity() << endl;
}