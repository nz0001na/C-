#include <iostream>
#include <deque>
using namespace std;

void main() {
	deque<int> d1;
	deque<int> d2;
	int i;
	d1.assign(6, 10);
	cout << "d1 size: " << d1.size() << endl;
	cout << "d1 content: ";
	for (i = 0; i < d1.size(); i++)cout << " " << d1[i];
	cout << endl;

	d2.assign(d1.begin() + 3, d1.end() - 1);
	cout << "d2 size: " << d2.size() << endl;
	cout << "d2 content: ";
	for (i = 0; i < d2.size(); i++)cout << " " << d2.at(i);
	cout << endl;
}
