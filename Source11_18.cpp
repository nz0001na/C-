#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s1 = "Visual C++";
	string s2 = "Visual Basic";
	cout << "Before Swap:" << endl;
	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;

	//s1.swap(s2);
	s2.swap(s1);
	cout << "After Swap:" << endl;
	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;


}