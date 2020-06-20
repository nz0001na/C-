#include <iostream>
#include<string>
using namespace std;

void main()
{
	string s1 = "Welcome to China!";
	string s2 = "Welcome to Beijing!";
	string s3 = "Welcome to Shandong!";
	if (s1 == s2) {
		cout << "s1 is equal to s2!" << endl;
	}
	else {
		cout << "s1 is not equal to s2!" << endl;
	}

	if (s2 > s1)cout << "s2 is bigger than s1!" << endl;
	else cout << "s2 is smaller than s1!" << endl;

	if (s3 >= s1) { cout << "s3 is equal to or bigger than s1!" << endl; }
	else cout << "s3 is smaller than s1!" << endl;
}