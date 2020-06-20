#include <iostream>
#include <string>
using namespace std;

void main()
{
	string str = "TCP functions at the OSI transport layer or layer 4.";
	string str2 = "layer";

	int pos = str.find(str2);
	if (pos != string::npos)
		cout << "The position of layer first appears is:" << pos << endl;

	pos = str.find("layer", pos + 1, 5);
	if (pos != string::npos)
		cout << "The position of layer second appears is:" << pos << endl;

	pos = str.find("System", 20);
	if (pos != string::npos)
		cout << "The position of System first appears is:" << pos << endl;
	else cout << "No system" << endl;
}