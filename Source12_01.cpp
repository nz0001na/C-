#include <iostream>
#include <vector>
using namespace std;

void main() {
	int i;
	vector <int> v1(3, 20);

	char str[] = { 'a','b','c','d','e' };
	vector <char>v2(str,str+sizeof(str)/sizeof(str[0]));

	vector<char> v3(v2.begin(), v2.end());
	vector<char>v4(v3);

	cout << "The content of v1 is:";
	for (i = 0; i < v1.size(); i++) {
		cout << v1[i]<<" ";
	}
	cout << endl;

	cout << "The content of v2 is:";
	for (i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}
	cout << endl;

	cout << "The content of v3 is:";
	for (i = 0; i < v3.size(); i++) {
		cout << v3[i] << " ";
	}
	cout << endl;

	cout << "The content of v4 is:";
	for (i = 0; i < v4.size(); i++) {
		cout << v4[i] << " ";
	}
	cout << endl;
}