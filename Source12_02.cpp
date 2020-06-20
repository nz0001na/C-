#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<int>v1(5, 20);
	vector<int>v2(10, 50);
	int i;
	cout << "The content of v1 is:";
	for (i = 0; i < v1.size(); i++)cout << " " << v1[i];
	cout << endl;

	cout << "The content of v2 is:";
	for (i = 0; i < v2.size(); i++)cout << " " << v2[i];
	cout << endl;

	v2 = v1;
	vector<int>::iterator it;

	cout << "The content of v1 is:";
	for (it = v1.begin(); it < v1.end(); it++)cout << " " << *it;
	cout << endl;

	cout << "The content of v2 is:";
	for (it = v2.begin(); it < v2.end(); it++)cout << " " << *it;
	cout << endl;

}