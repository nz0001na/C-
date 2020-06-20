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
	int a[] = { 21,29,35,49,52,67,75,88 };
	s.insert(a, a + 8);
	cout << "set1:";
	DisSet(s);

	pair<set<int>::iterator, set<int>::iterator> rd;
	rd = s.equal_range(35);
	cout << "35 euqal range:" << *rd.first << "," << *rd.second << endl;

	pair<set<int>::iterator,set<int>::iterator> r = s.equal_range(50);
	cout << "50 equal range:" << *r.first << "," << *r.second << endl;

}