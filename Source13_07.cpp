#include <iostream>
#include <deque>
using namespace std;

void DisElem(deque<int> d) {
	deque<int>::iterator it;
	for (it = d.begin(); it < d.end(); it++)cout << " " << *it;
	cout << endl;
}

void main() {
	deque<int> d;
	int i;
	for (i = 0; i < 5; i++)d.push_front(i * 10);
	cout << "content:";
	DisElem(d);

	d.resize(3);
	cout << "resize3:";
	DisElem(d);

	cout << "resize6:";
	d.resize(6, 50);
	DisElem(d);

	cout << "resize15:";
	d.resize(15);
	DisElem(d);
}