#include <iostream>
#include <set>
using namespace std;

void DisSet(set<char> s) {
	set<char>::iterator it;
	for (it = s.begin(); it != s.end(); it++)cout << " " << *it;
	cout << endl;
}

void main() {
	set<char> s;
	int i;
	for (i = 0; i < 5; i++)s.insert('A' + i);
	cout << "set1:";
	DisSet(s);

	set<char>::iterator it;
	it=s.find('C');
	cout << "find " << *it << endl;

	s.erase(s.find('A'));
	cout << "set2:";
	DisSet(s);

}