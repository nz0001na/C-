#include <iostream>
#include <string>
using namespace std;

void main()
{
	string str1 = "Physically,a bus is a set of wires.";
	string str2 = "Welcome to Visual C++ world!";
	string str3 = "I like Basic Program language!";
	str1.replace(0,35,str2);//Welcome to Visual C++ world!
	cout << str1 << endl;
	str1.replace(18,3,str3, 7, 5);//Welcome to Visual Basic world!
	cout << str1 << endl;

	string::iterator it = str1.begin();
	str1.replace(it + 18, it + 22, "Foxpro");//Welcome to Visual Foxproc world!
	cout << str1 << endl;

	str1.replace(str1.end() - 8, str1.end() - 1, 4, '!');//Welcome to Visual Foxpro!!!!!
	cout << str1 << endl;
}