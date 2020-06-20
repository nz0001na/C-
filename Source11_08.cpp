#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s = "Hello World!";
	string::reverse_iterator rit = s.rbegin();
	while (rit < s.rend()) {
		cout << *rit;
		rit++;
	}
}