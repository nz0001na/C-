#include <iostream>
#include <deque>
using namespace std;

void main() {
	deque<char> d;
	for (int i = 0; i < 8; i++)d.push_back('A' + i);

	cout << "d:";
	deque<char>::iterator it;
	for (it = d.begin(); it < d.end(); it++)cout << " " << *it;
	cout << endl;

	cout << "After:";
	deque<char>::reverse_iterator rit;
	for (rit = d.rbegin(); rit < d.rend(); rit++)cout << " " << *rit;
	cout << endl;
}