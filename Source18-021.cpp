#include <iostream>
using namespace std;

//use Binary Insert Sort

void DisElem(int a[], int n) {
	for (int i = 0; i < n; i++)cout << " " << a[i];
	cout << endl;
}

void main() {

	int a[] = { 56,43,99,23,4,22,78,48 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "before:";
	DisElem(a, n);

	int t,i,j,low=0,high=0,mid=0;
	for (i = 1; i < n; i++) {
		t = a[i];
		low = 0;
		high = i - 1;
		mid = (low + high) / 2;
		while (low <= high) {
			if (t >= a[mid])low = mid + 1;
			if (t < a[mid])high = mid - 1;
			mid = (low + high) / 2;
		}
		for (j = i - 1; j >= low; j--)a[j + 1] = a[j];
		a[low] = t;

	}

	cout << "after:";
	DisElem(a, n);
}