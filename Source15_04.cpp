#include <iostream>
#include <stack>
using namespace std;

void main() {
	stack<int> s;
	int a[] = { 10,4,5,3,8,8 };
	int n = sizeof(a) / sizeof(a[0]);
	int i;
	for (i = 0; i < n; i++) {
		s.push(a[i]);
		cout << i + 1 << ":" << s.top() << endl;
	}
}