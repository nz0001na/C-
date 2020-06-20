#include <iostream>
using namespace std;

void DisElem(int a[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		cout << " " << a[i];
	}
	cout << endl;
}

void main() {
	int a[] = { 67,53,73,21,34,98,12 };
	cout << "before:";
	int n = sizeof(a) / sizeof(a[0]);
	DisElem(a, n);
	int low = 0, high = 0, mid = 0;
	int t,i,j;
	for (i = 1; i < n; i++) {
		t = a[i];
		low = 0; high = i - 1;
		mid = (low + high) / 2;
		while (low <= high) {
			if (t >= a[mid]) low = mid+1;
			if (t < a[mid]) high = mid-1;
			mid = (high + low) / 2;
		}
		if (low > high) {
			for (j = i-1; j >=low; j--)a[j + 1] = a[j];
			a[low] = t;
		}
	}

	cout << "after:";
	DisElem(a, n);

}