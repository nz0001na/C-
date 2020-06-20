#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	char name[256];
	cout << "Please input your file name, and end with letter 'E':" << endl;
	cin.get(name, 256, 'E');

	ifstream infile;
	cout << "The content in the file " << name << " is :" << endl;
	infile.open(name);

	char ch;

	while (infile.good()) {
		ch = infile.get();
		cout << ch;
	}
	
	cout << endl;

	infile.close();

}