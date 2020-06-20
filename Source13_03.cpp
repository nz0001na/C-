#include <iostream>
#include <deque>
using namespace std;

void main() {
	deque<char> d;
	for (int i = 0; i < 8; i++)d.push_back('A' + i);

	deque<char>::iterator it;
	cout << "Content:";
	for (it = d.begin(); it < d.end(); it++)cout << " " << *it;

}
