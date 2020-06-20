#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> L;
	int i;
	for (i = 10; i <= 20; i++)L.push_back(i);
	cout << "Content:";
	list<int>::iterator it;
	for (it = L.begin(); it != L.end(); it++)cout << " " << *it;
	cout << endl;

	int sum = 0;
	for (; !L.empty(); L.pop_front()) {
		sum += L.front();
	}
	cout << "sum:" << sum << endl;
	int s = 0;
	while (!L.empty()) {
		s += L.front();
		L.pop_front();
	}

	cout << "s:" << sum << endl;
}