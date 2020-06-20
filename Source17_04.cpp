#include <iostream>
#include <set>
using namespace std;

void main() {

	int a[] = { 50,20,40,10,30 };
	set<int> s(a, a + 5);
	set<int>::iterator it;
	cout << "set:";
	for (it = s.begin(); it != s.end(); it++) {
		cout << " " << *it;
	}

	cout << "set2:"<<endl;
	while (!s.empty()) {
		cout << *s.begin() << endl;
		s.erase(s.begin());
	}

	if (s.empty())cout << "empty!" << endl;

}