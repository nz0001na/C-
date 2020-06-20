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
	for (int i = 1; i <= 10; i++)s.insert(i * 10);
	cout << "set1:";
	DisSet(s);

	set<int>::iterator it;
	it = s.begin();
	it++;
	s.erase(it);
	cout << "set2:";
	DisSet(s);


	int f=s.erase(60);
	cout << "set3:";
	DisSet(s);
	if (f == 1)cout << "erase succefully!" << endl;
	else cout << "erase failly!" << endl;

	it = s.find(70);
	cout << "set4:";
	s.erase(it, s.end());
	DisSet(s);

	s.clear();
	cout << "set5:";
	DisSet(s);

}