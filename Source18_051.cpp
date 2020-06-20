#include <iostream>
using namespace std;

//Quick Sort 
void DisElem(int a[], int n);
void QuickSort(int a[], int n);
void QSort(int a[], int n, int low, int high);
int Partition(int a[], int low, int high);

void main() {
	int a[] = { 3,7,21,8,5,2,9,5,32,45,31 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Before:";
	DisElem(a, n);
	QuickSort(a, n);
	cout << "After:";
	DisElem(a, n);
}

int Partition(int a[], int low, int high) {
	int t;
	t = a[low];
	while (low < high) {
		while (low<high&&a[high]>t)high--;
		if (low < high) { a[low] = a[high]; low++; }

		while (low < high&&a[low] < t)low++;
		if (low < high) {
			a[high] = a[low]; high--;
		}
	}
	a[low] = t;
	return low;
}

void QSort(int a[], int n, int low, int high) {
	int pivot = Partition(a,low,high);
	if (low < high) {
		QSort(a, n, low, pivot - 1);
		QSort(a, n, pivot+1, high);

	}
}


void QuickSort(int a[], int n) {
	QSort(a, n, 0, n - 1);
}

void DisElem(int a[], int n) {
	for (int i = 0; i < n; i++)cout << " " << a[i];
	cout << endl;
}