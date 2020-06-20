#include <iostream>
#include <set>
using namespace std;

void DisSet(set<char> s) {
	set<char>::iterator it;
	for (it = s.begin(); it != s.end(); it++)cout << " " << *it;
	cout << endl;
}

void isElem(set<char> s, char start, char end) {
	char ch;
	for (ch = start; ch <= end; ch++) {
		if (s.count(ch) == 1)cout << " " << ch;
	}
	cout << endl;
}

void NotElem(set<char> s, char start, char end) {
	char ch;
	for (ch = start; ch <= end; ch++) {
		if (s.count(ch) == 0)cout << " " << ch;
	}
	cout << endl;
}

void main() {
	set<char> s;
	int i;
	for (i = 0; i < 10; i+=2)s.insert('A' + i);
	cout << "set:";
	DisSet(s);

	cout << "Belong to s:";
	isElem(s, 'A', 'H');

	cout << "Not belong to s:";
	NotElem(s, 'A', 'H');
}