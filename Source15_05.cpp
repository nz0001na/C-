#include <iostream>
#include <stack>
using namespace std;

void main() {
	stack<char> s;
	int i;
	for (i = 0; i < 5; i++) {
		s.push('a' + i);
		cout << i + 1 << ":" << s.top() << endl;
	}

	cout << "pop:" << endl;
	i = 1;
	while (!s.empty()) {
		cout << "top" << i << ":" << s.top() << endl;
		s.pop();
	}
	
}