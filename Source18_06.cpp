#include <iostream>
using namespace std;

void DisElem(int a[], int n) {
	for (int i = 0; i < n; i++)cout << " " << a[i];
	cout << endl;
}

void main() {
	int a[] = { 65,32,71,28,83,7,53,49 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Before:";
	DisElem(a, n);

	int i = 0, j, t;
	int minindex = 0;
	for (i = 0; i < n-1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[j] <= a[minindex]) {
				minindex = j;
			}
		}
		//if (i != minindex) {
			t = a[i];
			a[i] = a[minindex];
			a[minindex] = t;
		//}
		
	}

	cout << "After:";
	DisElem(a, n);
}