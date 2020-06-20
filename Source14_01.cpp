#include <iostream>
#include <list>
using namespace std;

void PrintList(list<int> L, char *str) {
	list<int>::iterator it;
	cout << "List " << str << " Content:";
	for (it = L.begin(); it != L.end(); it++) {
		cout << " " << *it;
	}
	cout << endl;
}

void main() {
	list<int> L1;
	list<int> L2(4, 100);
	list<int> L3(L2.begin(), L2.end());
	list<int> L4(L3);
	PrintList(L1, "L1");
	PrintList(L2, "L2");
	PrintList(L3, "L3");
	PrintList(L4, "L4");
	int a[] = { 22,67,39,11 };
	list<int> L5(a, a + sizeof(a) / sizeof(a[0]));
	PrintList(L5, "L5");
}