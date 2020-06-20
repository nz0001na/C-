#include <iostream>
#include <set>
using namespace std;

void DisSet(set<int> s, char *str) {
	set<int>::iterator it;
	cout << str<<":";
	for (it = s.begin(); it != s.end(); it++)cout << " " << *it;
	cout << endl;
}

void main() {
	set<int> s1;
	set<int> s2;
	int i = 0;
	for (i = 1; i <= 3; i++)s1.insert(i * 10);
	for (i = 4; i <= 6; i++)s2.insert(i * 10);
	cout << "Before:" << endl;
	DisSet(s1,"s1");
	DisSet(s2,"s2");

	s1.swap(s2);
	cout << "After:" << endl;
	DisSet(s1,"s1");
	DisSet(s2,"s2");



}