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
	int a[] = { 1,11,22,33,44,55,66,77,88,99 };
	int i;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)s.insert(a[i]);
	cout << "set1:";
	DisSet(s);
	set<int>::iterator low, up;
	low=s.lower_bound(40);
	cout << "low40:" << *low << endl;
	up=s.upper_bound(80);
	cout << "up80:" << *up << endl;

	s.erase(low, up);
	cout << "set2:";
	DisSet(s);
	

}