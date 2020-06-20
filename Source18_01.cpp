#include <iostream>
using namespace std;

void DisElem(int a[],int n) {
	for (int i = 0; i < n; i++)
		cout << " " << a[i];
	cout << endl;
}

void main() {
	int a[] = { 17,46,32,87,58,9,50,38 };
	cout << "original:";
	int n = sizeof(a) / sizeof(a[0]);
	DisElem(a,n);
	int t;
	int i,j=0;
	for (i = 1; i < sizeof(a) / sizeof(a[0]); i++) {
		t=a[i];
			for (j = i - 1; j >= 0; j--) {
				if (a[j] > t) { 
					a[j + 1] = a[j]; 
					if (j == 0) { a[j] = t; }
				}
				else {
					a[j + 1] = t; break;
				}
			}
	}
	cout << "after sorting:";
	DisElem(a,n);
	

}