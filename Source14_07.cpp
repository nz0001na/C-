#include <iostream>
#include <list>
using namespace std;

void DisElem(list<float> l) {
	list<float>::iterator it;
	for (it = l.begin(); it != l.end(); it++)cout << " " << *it;
	cout << endl;
}

void main() {
	list<float> L;
	float a[] = { 2.5,5.0,7.5,10.0,12.5 };
	int i;
	for (i = 0; i < 5; i++)L.push_back(a[i]);

	cout << "Initial:";
	DisElem(L);

	cout << "resize to 3:";
	L.resize(3);
	DisElem(L);

	cout << "resize to 8:";
	L.resize(8, 10.5);
	DisElem(L);

	cout << "resize to 10:";
	L.resize(10);
	DisElem(L);

}