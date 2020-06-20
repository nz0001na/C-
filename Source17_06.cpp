#include <iostream>
#include <set>
using namespace std;

void main() {
	set<int> s;
	set<int>::reverse_iterator rit;
	if (s.max_size() > 2000) {
		for (int i = 0; i < 2000; i++)s.insert(i + 1);
		for (rit = s.rbegin(); rit != s.rend(); rit++)cout << " " << *rit;
		cout << endl;
	}
	else {
		cout << "fail to contain 2000 characters!" << endl;
		cout << "size:" << s.size() << endl;
	}
}