#include <iostream>
#include <deque>
using namespace std;

void DisElem(deque<char> d) {
	cout << "Content:";
	for (int i = 0; i < d.size(); i++)cout << " " << d[i];
	cout << endl;
}

void DisElem2(deque<char> d) {
	cout << "Content:";
	deque<char>::iterator it;
	for (it = d.begin(); it < d.end(); it++)cout << " " << *it;
	cout << endl;
}

void DisElem3(deque<char>d) {
	cout << "Content:";
	for (int i = 0; i < d.size(); i++)cout << " " << d.at(i);
	cout << endl;
}

void main() {
	deque<int> d1;
	deque<char> d2(5, 'a');
	deque<char> d3(d2.begin() + 1, d2.end());
	deque<char> d4(d3);

	if (d1.empty()) {
		cout << "d1 is empty!" << endl;
	}

	cout << "d2:";
	DisElem(d2);

	cout << "d3:";
	DisElem2(d3);

	cout << "d4:";
	DisElem3(d4);
}