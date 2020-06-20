#include <iostream>
#include <deque>
using namespace std;

void InitDeque(deque<double> *d, double a[], int n) {
	for (int i = 0; i < n; i++) {
		d->push_back(a[i]);
	}
}

void DisElem(deque<double> d) {
	for (int i = 0; i < d.size(); i++)cout << " " << d.at(i);
	cout << endl;
}

void main() {
	deque<double> d1;
	deque<double> d2;

	double a1[] = {3.14,2.34};
	double a2[] = {0.3,0.5,2.3,9.0,5.4};

	InitDeque(&d1, a1, sizeof(a1) / sizeof(a1[0]));
	InitDeque(&d2, a2, sizeof(a2) / sizeof(a2[0]));

	cout << "Before:" << endl;
	cout << "d1:";
	DisElem(d1);
	cout << "d2:";
	DisElem(d2);

	d1.swap(d2);
	cout << "After swap:" << endl;
	cout << "d1:";
	DisElem(d1);
	cout << "d2:";
	DisElem(d2);

}