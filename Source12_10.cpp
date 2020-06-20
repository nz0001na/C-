#include <iostream>
#include <vector>
using namespace std;

void DisElem(vector<int> v) {
	cout << "Content: ";
	for (int i = 0; i < v.size(); i++) {
		cout << " " << v.at(i);
	}
	cout << endl;
}


void main() {
	vector<int> v(10);
	int i;
	vector<int>::size_type n;
	n = v.size();
	for (i = 0; i < n; i++) {
		v.at(i) = i + 1;
	}

	DisElem(v);

	int t;
	for (i = 0; i < n / 2; i++) {
		if (v.at(i) < v.at(n - i - 1)) {
			t = v.at(i);
			v.at(i) = v.at(n - i - 1);
			v.at(n - i - 1) = t;
		}
	}
	cout << "After:" << endl;
	DisElem(v);


}