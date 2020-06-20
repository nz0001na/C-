#include <iostream>
#include <deque>
using namespace std;

void DisElem(deque<int> d) {
	for (int i = 0; i < d.size(); i++)cout << " " << d[i];
	cout << endl;
}

void main() {
	deque<int> d;
	int a[] = { 25,13,89,57,633,21,9,88 };
	int n = sizeof(a) / sizeof(a[0]);
	int i, j;
	d.resize(n);
	for (i = 0; i < n; i++)d[i] = a[i];
	cout << "Before:";
	DisElem(d);
	int t;
	for(i=0;i<n;i++)
		for (j = i + 1; j < n; j++) {
			if (d[i] < d[j]) {
				t = d[i];
				d[i] = d[j];
				d[j] = t;
			}
		}
	cout << "After:";
	DisElem(d);
}
