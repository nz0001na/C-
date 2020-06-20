#include <iostream>
using namespace std;
//bubble sorting

void DisElem(int a[], int n) {
	for (int i = 0; i < n; i++)cout << " " << a[i];
	cout << endl;
}

void main() {
	int a[] = { 56,72,44,31,99,21,69,80 };
	cout << "Before:";
	int n = sizeof(a) / sizeof(a[0]);
	DisElem(a, n);

	int i, j,t;
	for(i=0;i<n;i++)
		for (j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	cout << "after:";
	DisElem(a, n);

}