#include <iostream>
#include <string>
using namespace std;

void main() {
	string str1 = "Welcome to my hometown.";
	string str2 = "c:\\program file\\herosoft";

	cout << "str1: " << str1 << endl;
	int pos = str1.find_first_of("cet");
	while (pos != string::npos) {
		cout << "position:" << pos << endl;
		str1[pos] = '#';
		pos = str1.find_first_of("cet", pos + 1);
	}
	cout << "str1: " << str1 << endl;

	cout << "***********************************************" << endl;

	pos = str2.find_last_of("\\");
	cout << "\\\\ position:" << pos << endl;
	cout << "len:" << str2.length() << endl;


}