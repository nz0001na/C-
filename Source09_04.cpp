#include <iostream>
using namespace std;

void main()
{
	char ch,str[30];
	int n;
	cout << "Please input a number or a string:\n";
	ch = cin.peek();
	if (ch > '0' && ch < '9') {
		cin >> n;
		cout << "The number you input is:" << n << endl;
	}
	else {
		cin.getline(str, 30);
		cout << "The string you input is:" << str << endl;
	}

}