#include <iostream>
#include <stack>
using namespace std;

void main() {
	stack<int> s;
	s.push(10);
	s.push(9);
	s.push(8);
	cout << "size:" << s.size() << endl;
	cout << "top:" << s.top() << endl;

	
}
