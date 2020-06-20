#include <iostream>
#include<vector>
using namespace std;

void main() {
	vector<int>v;
	for (int i = 0; i < 200; i++) {
		v.push_back(i);
	}

	cout << "size: " << v.size() << endl;
	cout << "max_size: " << v.max_size() << endl;
	cout << "capacity: " << v.capacity() << endl;
}