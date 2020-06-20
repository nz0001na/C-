#include <iostream>
#include <set>
using namespace std;

void main() {
	set<int> s1;
	int a[] = { 10,5,14,6,9 };
	set<int> s2(a, a + 5);
	set<int> s3(s2);

	cout << "s2:";
	set<int>::iterator it;
	for (it = s2.begin(); it != s2.end(); it++) {
		cout << " " << *it;
	}
	cout << endl;

	set<int>::reverse_iterator rit;
	cout << "s3:";
	for (rit = s3.rbegin(); rit != s3.rend(); rit++) {
		cout << " " << *rit;
	}
	cout << endl;
}