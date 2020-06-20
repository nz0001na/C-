#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	fstream file;
	int pos,length;
	
	file.open("E:/test.txt", ios_base::in | ios_base::out);
	if (file.is_open()) {
		file.write("Hello,My name is xxxx.How are you?", 25);
		pos = file.tellp();
		file.seekp(pos);
		file.write("12345678", 8);

		file.seekp(0, ios_base::end);
		length = file.tellp();
		cout << length;

		char *buff = new char[length];
		file.seekp(0, ios_base::beg);
		file.read(buff, length);
		cout << "The content is as follows:" << endl;
		cout.write(buff, length);

		file.close();
	}
	else {
		cout << "Fail to open file!" << endl;
	}
	
}