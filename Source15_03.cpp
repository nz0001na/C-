#include <iostream>
#include <list>
using namespace std;

void main() {
	char a[] = { 'H','e','l','l','o',' ','W','o','r','l','d' };
	//char a[] = "Hello World";
	int len = sizeof(a) / sizeof(a[0]);//11,12
	int n = strlen(a);//23,11
	cout << "len:" << len << ", n:" << n << endl;
	list<char> L(a, a + n);
	cout << "Content:";
	list<char>::iterator it;
	for (it = L.begin(); it != L.end(); it++) {
		cout << " " << *it;
	}
	cout << endl;
}