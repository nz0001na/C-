#include <iostream>
#include <set>
using namespace std;


void DisSet(set<int> s) {
	set<int>::iterator it;
	for (it = s.begin(); it != s.end(); it++)cout << " " << *it;
	cout << endl;
}

void main() {
	set<int> s;
	int a[] = { 36,12,30,44,93,66 };
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		s.insert(a[i]);
	}
	cout << "set1:";
	DisSet(s);

	pair<set<int>::iterator, bool> r;
	r=s.insert(30);
	cout << "set2:";
	DisSet(s);

	set<int>::iterator it;
	if (r.second == false)it = r.first;

	s.insert(it, 32);
	cout << "set3:";
	DisSet(s);

	s.insert(it, 100);
	cout << "set4:";
	DisSet(s);

	int b[] = { 6,20 };
	s.insert(b, b + 2);
	cout << "set5:";
	DisSet(s);

}