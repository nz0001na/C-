#include <iostream>
#include <deque>
using namespace std;

void DisElem(deque<int>d) {
	for (int i = 0; i < d.size(); i++)cout << " " << d[i];
	cout << endl;
}
void main() {
	deque<int> d;
	cout << "size:" << d.size() << endl;
	cout << "max size:" << d.max_size() << endl;
	cout << "*****************************" << endl;
	for (int i = 1; i < 8; i++)d.push_front(i);
	DisElem(d);
	cout << "size:" << d.size() << endl;
	cout << "max size:" << d.max_size() << endl;
	cout << "*****************************" << endl;
	d.insert(d.begin(), 6, 20);
	DisElem(d);
	cout << "size:" << d.size() << endl;
	cout << "max size:" << d.max_size() << endl;
	cout << "*****************************" << endl;
	d.pop_back();
	DisElem(d);
	cout << "size:" << d.size() << endl;
	cout << "max size:" << d.max_size() << endl;
	cout << "*****************************" << endl;
	d.pop_front();
	DisElem(d);
	cout << "size:" << d.size() << endl;
	cout << "max size:" << d.max_size() << endl;
}