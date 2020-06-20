#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s ("Hello World!");
	string::iterator it = s.begin();
	while (it<s.end())
	{
		cout << *it;
		it++;
	}
}