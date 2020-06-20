#include <iostream>
using namespace std;

void DisElem(int a[], int n);
void QuickSort(int a[], int n);
void Qsort(int a[], int n, int low, int high);
int Partion(int a[], int low, int high);

//quick sort
void main() {
	int a[] = { 55,22,44,67,35,77,18,69 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Before:";
	DisElem(a, n);
	QuickSort(a, n);
	cout << "After:";
	DisElem(a, n);
}

//display
void DisElem(int a[],int n) {
	for (int i = 0; i < n; i++)cout << " " << a[i];
	cout << endl;
}

//sort main entry
void QuickSort(int a[], int n) {
	Qsort(a, n, 0, n - 1);
}

//
void Qsort(int a[], int n, int low, int high) {
	int pivot;
	if (low < high) {
		pivot = Partion(a, low, high);
		Qsort(a, n, low, pivot - 1);
		Qsort(a, n, pivot + 1, high);
	}	
}

int Partion(int a[], int low, int high) {
//	int pivot;
	int t;
	t = a[low];
	while (low < high) {
		while (low < high&&a[high] > t)high--;
		if (low < high) {
			a[low] = a[high];
			low++;
		}
		
		while (low < high&&a[low] < t)low++;
		if (low < high) {
			a[high] = a[low];
			high--;
		}
		
	}
	//if (low >= high) {
		a[low] = t;

	//}
		return low;
}