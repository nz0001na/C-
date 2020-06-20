#include <iostream>
#include <deque>
using namespace std;

void DisElem(deque<int>d) {
	for (int i = 0; i < d.size(); i++)cout << " " << d[i];
	cout << endl;
}

void main() {
	deque<int> d1(10, 80);
	deque<int> d2(20, 100);
	cout << "d1:";
	DisElem(d1);
	cout << "d2:";
	DisElem(d2);
	deque<int> t;
	t = d2;
	d2 = d1;
	d1 = t;
	cout << "d1:";
	DisElem(d1);
	cout << "d2:";
	DisElem(d2);



}