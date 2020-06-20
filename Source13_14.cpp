#include <iostream>
#include <deque>
using namespace std;

int sum(deque<int> d) {
	int s=0;
	for (int i = 0; i < d.size(); i++) {
		cout << " " << d[i];
		s += d[i];
	}
	cout << endl;
	return s;
}


void main() {
	deque<int> d;
	int i,s;
	for (i = 1; i < 6; i++)d.push_back(i * 10);
	cout << "Content:";
	s=sum(d);
	cout << "Sum :" << s << endl;

	//d.pop_back();
	d.pop_front();
	cout << "Content:";
	s = sum(d);
	cout << "Sum :" << s << endl;

}