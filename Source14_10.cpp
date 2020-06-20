#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> L1;
	list<int> L2;

	L1.assign(5, 800);
	cout << "L1 size:" << L1.size() << endl;
	cout << "L1 content:";
	list<int>::iterator it;
	for (it = L1.begin(); it != L1.end(); it++)cout << " " << *it;
	cout << endl;

	L2.assign(L1.begin(), L1.end());
	cout << "L2 size:" << L2.size() << endl;
	cout << "L2 content:";
	for (it = L2.begin(); it != L2.end(); it++)cout << " " << *it;
	cout << endl;

	L2.push_front(76);
	L2.push_back(67);
	cout << "L2 content:";
	for (it = L2.begin(); it != L2.end(); it++)cout << " " << *it;
	cout << endl;

	L2.pop_back();
	cout << "L2 content:";
	for (it = L2.begin(); it != L2.end(); it++)cout << " " << *it;
	cout << endl;

	L2.pop_front();
	cout << "L2 content:";
	for (it = L2.begin(); it != L2.end(); it++)cout << " " << *it;
	cout << endl;
}