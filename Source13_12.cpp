#include <iostream>
#include <deque>
using namespace std;

void main() {
	deque<char> d;
	int i;
	for (i = 0; i < 5; i++)d.push_back('A' + i);
	cout << "d size: " << d.size() << endl;
	cout << "d content:";
	deque<char>::iterator it;
	for (it = d.begin(); it < d.end(); it++)cout << " " << *it;
	cout << endl;
}