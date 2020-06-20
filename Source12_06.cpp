#include <iostream>
#include <vector>
using namespace std;

void main() {
	vector<int>v;
	vector<int>::iterator it;
	int s = 0;
	for (int i = 0; i < 10; i++)v.push_back(i + 1);

	if (v.empty()) {
		cout << "Empty!" << endl;
	}
	else {
		cout << "Content:";
		for (it = v.begin(); it < v.end(); it++) {
			cout << " " << *it;
			s += *it;
		}
		cout << "Sum:" << s << endl;

	}
}