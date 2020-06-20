#include <iostream>
using namespace std;

void main()
{
	char str[256];
	cout << "Please input one sentence:\n";
	cin.ignore(256, ',');
	cin.getline(str, 256);
	
	cout << "Ignore the content before ',':\n";
	cout << str << endl;
}