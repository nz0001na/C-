#include <iostream>
#include <vector>
using namespace std;

void main() {
	vector<char>v;
	vector<char>::reverse_iterator rit;

	for (int i = 0; i <= 5; i++) {
		v.push_back('A' + i);
	}

	cout << "The content of v is:";
	for (rit = v.rbegin(); rit < v.rend(); rit++) {
		cout << " " << *rit;
	}
}