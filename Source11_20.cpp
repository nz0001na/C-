#include <iostream>
#include <string>
using namespace std;

void main() {
	char buff[60];
	int len;
	string str = "Welcome to www.nwu.edu.cn";
	len=str.copy(buff, 5, 11);//Have problem
	buff[len] = '\0';
	cout << buff << endl;
}