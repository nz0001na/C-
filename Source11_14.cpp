#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s1 = "China";
	string s2 = "";

	if (s1.empty())cout << "S1 is empty!" << endl;
	else cout << "S1 is not empty!" << endl;

	if (s2.empty())cout << "s2 is empty!" << endl;
	else cout << "s2 is not empty!" << endl;
}