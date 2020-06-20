#include <iostream>
#include <deque>
using namespace std;

void main() {
	int a[] = { 23,12,9,6,15,90,33 };
	int n = sizeof(a) / sizeof(a[0]);
	int i;
	deque<int> d;
	for (i = 0; i < n; i++)d.push_front(a[i]);

	for (i = 0; i < d.size(); i++)cout << " " << d[i];
	cout << endl;

	int sum = 0;
	deque<int>::iterator it;
	for (it = d.begin(); it < d.end(); it++) {
		sum += *it;

	}
	cout << sum << endl;
}