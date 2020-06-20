#include <iostream>
#include <string>
using namespace std;

void main()
{
	string first, second, third, fourth,domain;
	string s1 = "2012 ";
	string s2 = "Olympic ";
	string s3("Games");

	first = "www.";
	second = "wvu.";
	third = "edu.";
	fourth = "com";
	domain = first + second + third + fourth;
	cout << "domain:" << domain << endl;

	s1 += s2;
	s1 += s3;

	cout << "s1:" << s1 << endl;
}
