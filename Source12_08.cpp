#include <iostream>
#include <vector>
using namespace std;

void main() {
	vector<int> v;
	v.push_back(25);
	cout << "Before: " << endl;
	cout << "  size: " << v.size() << endl;
	cout << "  max size: " << v.max_size() << endl;
	cout << "  capacity: " << v.capacity() << endl;

	v.reserve(20);
	cout << "After: " << endl;
	cout << "  size: " << v.size() << endl;
	cout << "  max size: " << v.max_size() << endl;
	cout << "  capacity: " << v.capacity() << endl;
}