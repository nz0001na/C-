#include <iostream>
#include <queue>
using namespace std;

void main() {
	queue<int> q;
	q.push(3);
	q.push(4);
	q.push(5);
	cout << "front:" << q.front() << endl;
	cout << "back:" << q.back() << endl;
	cout << "size:" << q.size() << endl;

	int sum = 0;
	int i = 1;
	while (!q.empty()) {
		sum += q.front();
		cout << "font" << i << ":" << q.front() << endl;
		i++;
		q.pop();
	}
	cout << "sum:" << sum << endl;
	cout << "size:" << q.size() << endl;
}