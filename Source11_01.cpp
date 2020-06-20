#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s1("1234567890abcdefghijklmnopqrstuvwxyz");
	string s2;
	string s3(s1, 8, 9);
	string s4("Sequence Containner", 7);
	string s5("This is the second string");
	string s6(9, 'A');
	string s7(s1.begin(), s1.end() - 6);
	string s8(s5, 3);
	string s9("This is the second string",3);

	cout << "1:" << s1 << endl;
	cout << "2:" << s2 << endl;
	cout << "3:" << s3 << endl;
	cout << "4:" << s4 << endl;
	cout << "5:" << s5 << endl;
	cout << "6:" << s6 << endl;
	cout << "7:" << s7 << endl;
	cout << "8:" << s8 << endl;
	cout << "9:" << s9 << endl;
}