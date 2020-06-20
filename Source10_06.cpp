#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	fstream file;
	int length;
	char * buff;
	file.open("E:/test.txt", ios_base::binary);
	if (file.is_open()) {
		file.seekg(0, ios_base::end);
		length = file.tellg();

		buff = new char[length];
		file.read(buff, length);
		cout.write(buff, length);

		file.close();

	}
	else {
		cout << "Fail to open file" << endl;
	}
}