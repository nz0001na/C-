#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> L;
	int i;
	for (i = 0; i < 5; i++)L.push_back(i + 50);

	cout << "front:" << L.front() << endl;
	cout << "content:";
	list<int>::iterator it;
	for (it = L.begin(); it != L.end(); it++)cout << " " << *it;
	cout << endl;
	cout << "end:" << L.back() << endl;
}