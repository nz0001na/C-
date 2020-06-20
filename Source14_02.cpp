#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> L1(8);
	list<int> L2(6);

	cout << "L1 size: " << L1.size() << endl;
	cout << "L2 size: " << L2.size() << endl;

	L2 = L1;

	cout << "Swap:" << endl;
	cout << "L1 size: " << L1.size() << endl;
	cout << "L2 size: " << L2.size() << endl;
}