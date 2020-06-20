#include <iostream>
#include <deque>
using namespace std;

void DisElem(deque<int> d) {
	for (int i = 0; i < d.size(); i++)cout << " " << d[i];
	cout << endl;
}
void main() {
	deque<int> d;
	deque<int>d2(3, 50);
	int a[] = { 10,21,55,3,88,102,78,66 };
	int i,n = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < n; i++)d.push_back(a[i]);
	DisElem(d);

	deque<int>::iterator it = d.begin();
	it=d.insert(it, 6);
	DisElem(d);

	d.insert(it, 2, 20);
	DisElem(d);

	it = d.begin() + 3;
	d.insert(it, d2.begin(), d2.end());
	DisElem(d);
}