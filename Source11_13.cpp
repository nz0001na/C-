#include<iostream>
#include<string>
using namespace std;

void main()
{
	string s;
	s.reserve(3);
	for (size_t i = 0; i < 26; i++) {
		s.append(1,'a' + i);
	}
	cout << s << endl;
	cout << "The size of s is:" << s.size() << endl;
	cout << "The length of s is:" << s.length() << endl;
	cout << "The capacity of s is:" << s.capacity() << endl;
	cout << "The Max size of s is:" << s.max_size() << endl;
}