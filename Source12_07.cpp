#include <iostream>
#include <vector>
using namespace std;

void DisElem(vector<int> v) {
	vector<int>::iterator it;
	cout << "The content of v: ";
	for (it = v.begin(); it < v.end(); it++) {
		cout << " " << *it;
	}
	cout << endl;
}
void main() {
	vector<int> v;
	for (int i = 0; i < 10; i++)v.push_back(i + 1);

	DisElem(v);

	v.resize(5);
	DisElem(v);

	v.resize(10, 7);
	DisElem(v);

	v.resize(15);
	DisElem(v);
}