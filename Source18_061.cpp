#include <iostream>
using namespace std;

void DisElem(int a[], int n) {
	for (int i = 0; i < n; i++)cout << " " << a[i];
	cout << endl;
}

void SelectionSort(int a[], int n) {
	int min=0, i, j,t;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[min])min = j;
		   }
		if (min != i) {
			t = a[i];
			a[i] = a[min];
			a[min] = t;
		}

		cout << "sort" << i + 1 << ":";
		DisElem(a, n);
	}
		
	cout << "After:";
	DisElem(a, n);
}


void main() {
	int a[] = { 7,2,9,32,12,0,17,23,15 };
	int n = sizeof(a) / sizeof(a[0]);
    
	cout << "Before:";
	DisElem(a, n);

	SelectionSort(a, n);

}