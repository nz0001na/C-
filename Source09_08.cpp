#include <iostream>
using namespace std;

void main()
{
	cout.width(10);
	cout.flags(ios_base::right);
	cout << 60 << endl;
	cout << "Previous fill character is:" << cout.fill('X') << endl;

	cout.width(10);
	cout.flags(ios_base::right);
	cout << 60 << endl;
	cout << "Previous fill character is:" << cout.fill('D') << endl;

	cout.width(10);
	cout.flags(ios_base::left);
	cout << 60 << endl;
	cout << "Previous fill character is:" << cout.fill() << endl;
}