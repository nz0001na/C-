#include <iostream>
using namespace std;

void main()
{
	char ch;
	cout << "Please input something:" << endl;
	do {
		ch = cin.get();
		cout.put(ch);
	} while (ch != '\n');
	
}