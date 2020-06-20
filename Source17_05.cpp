#include <iostream>
#include <set>
using namespace std;

void DisSet(set<int> s) {
	set<int>::iterator it;
	cout << "size:" << s.size() << endl;
	cout << "content:";
	for (it = s.begin(); it != s.end(); it++) {
		cout << " " << *it;
	}
	cout << endl;
}

void main() {
	int i;
	set<int> s;
	for (i = 1; i < 7; i++)s.insert(i * 5);
	DisSet(s);

	s.insert(21);
	DisSet(s);
}