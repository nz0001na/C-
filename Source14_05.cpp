#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> L(5);
	cout << "size: " << L.size() << endl;
	cout << "max size: " << L.max_size() << endl;
	int i;
	for (i = 1; i <= 5; i++)L.push_back(i);
	cout << "add 5" << endl;
	cout << "size: " << L.size() << endl;
	cout << "max size: " << L.max_size() << endl;

	L.insert(L.begin(), 5, 20);
	cout << "add 5" << endl;
	cout << "size: " << L.size() << endl;
	cout << "max size: " << L.max_size() << endl;

	L.pop_back();
	cout << "pop" << endl;
	cout << "size: " << L.size() << endl;
	cout << "max size: " << L.max_size() << endl;

}