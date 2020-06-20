#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> L1;
	list<int> L2(3, 76);
	int i;
	for (i = 0; i < 5; i++)L1.push_back(10);
	list<int>::iterator it;
	cout << "L1 content:";
	for (it = L1.begin(); it != L1.end(); it++)cout << " " << *it;
	cout << endl;

	it=L1.insert(L1.end(), 11);
	/*cout << "L1 content:";
	for (it = L1.begin(); it != L1.end(); it++)cout << " " << *it;
	cout << endl;*/
	it--;
	L1.insert(it, L2.begin(), L2.end());
	cout << "L1 content:";
	for (it = L1.begin(); it != L1.end(); it++)cout << " " << *it;
	cout << endl;




}