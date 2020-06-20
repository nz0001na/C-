#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	char str[120];
	ifstream ifs("E:/test.txt", ifstream::in);
	if (ifs.good()) {
		ifs.getline(str, 100);
		cout << str << endl;
		ifs.close();
	}
	else {
		cout << "Fail to open!" << endl;
	}


}