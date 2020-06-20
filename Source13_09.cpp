#include <iostream>
#include <deque>
using namespace std;

void main() {
	deque<char> d(10);
	int i;
	for (i = 0; i < d.size(); i++)d.at(i) = 'A' + i;

	cout << "Normal:";
	for (i = 0; i < d.size(); i++)cout << " " << d.at(i);
	cout << endl;

	cout << "d[]:";
	for (i = 0; i < d.size(); i++)cout << " " << d[i];
	cout << endl;

	cout << "The first element is: " << d.front() << endl;
	cout << "The second element is: " << d.back() << endl;

}