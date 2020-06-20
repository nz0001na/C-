#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> L;
	int i;
	for (i = 1; i <= 8; i++) {
		L.push_back(i);
	}

	list<int>::iterator it;
	cout << "Content:";
	for (it = L.begin(); it != L.end(); it++)cout << " " << *it;
	cout << endl;

	list<int>::reverse_iterator rit;
	cout << "Reverse Content:";
	for (rit = L.rbegin(); rit != L.rend(); rit++)cout << " " << *rit;
	cout << endl;
}