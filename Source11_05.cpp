#include<iostream>
#include<string>
using namespace std;

void main()
{
	string s = "Hello World!";
	for (size_t i = 0; i < s.length(); i++) {
		//cout << s[i] << endl;
		cout << s.at(i) << endl;
	}
	
}