#include <iostream>
#include <deque>
using namespace std;

void DisElem(deque<int>d) {
	for (int i = 0; i < d.size(); i++)cout << " " << d[i];
	cout << endl;
}

void main() {
	int i;
	deque<int> d;
	for (i = 0; i < 5; i++)d.push_front(i + 1);
	DisElem(d);

	d.erase(d.begin() + 1);
	DisElem(d);

	d.erase(d.end() - 2, d.end());
	DisElem(d);

	d.clear();
	cout << "After clear:";
	DisElem(d);
	cout << "size:" << d.size() << endl;

	d.push_back(60);
	d.push_back(62);
	cout << "After push:";
	DisElem(d);
	cout << "size:" << d.size() << endl;
}