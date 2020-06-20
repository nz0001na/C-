#include <iostream>
using namespace std;

void main()
{
	char c1, c2, c[8];
	cout << "Please input your string:" << endl;
	c1 = cin.get();
	c2 = cin.get();
	cin.putback(c1);

	cin.getline(c, 8);
	cout << "The string you input is:" << c << endl;
}