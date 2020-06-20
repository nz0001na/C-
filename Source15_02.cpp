#include <iostream>
#include <stack>
using namespace std;

void main() {
	stack<int> s;
	int i;
	for (i = 0; i < 10; i++)s.push(i + 1);
	cout << "size:" << s.size() << endl;

	int sum = 0;
	i = 0;
	while (!s.empty()) {
		sum += s.top();
		cout << i+1 << ":" << s.top() << endl;
		i++;
		s.pop();
	}

	cout << "sum:" << sum << endl;
	cout << "size2:" << s.size() << endl;
}