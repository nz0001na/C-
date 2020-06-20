#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	cout << 345 << endl;

	cout.width(10);
	cout << 345 << endl;

	cout << setw(10) << 567 << endl;

	cout.width(12);
	cout.fill('A');
	cout << left<<345 << endl;

	

}