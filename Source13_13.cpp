#include <iostream>
#include <deque>
using namespace std;

void main() {
	deque<int> d(3, 20);
	d.push_front(60);
	d.push_back(99);
	d.push_front(90);

	cout << "Content:";
	deque<int>::iterator p;
	p = d.begin();
	while (p != d.end()) {
		cout << " " << *p;
		p++;
	}
	cout << endl;
}