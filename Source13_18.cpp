#include <iostream>
#include <deque>
using namespace std;

void main() {
	deque<int> d;
	int i;
	for (i = 0; i < 5; i++) {
		d.push_back(i + 100);
	}
	cout << "Content:";
	deque<int>::iterator it;
	for (it = d.begin(); it < d.end(); it++) {
		cout << " " << *it;
	}
	cout << endl;

	d.clear();
	cout << "Content:";
	for (it = d.begin(); it < d.end(); it++) {
		cout << " " << *it;
	}
	cout << endl;

	d.push_back(60);
	d.push_back(61);
	cout << "Content:";
	for (it = d.begin(); it < d.end(); it++) {
		cout << " " << *it;
	}
	cout << endl;
}