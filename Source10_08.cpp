#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	fstream file;
	int i;
	file.open("E:/test.txt", ios_base::out);
	if (file.is_open()) {
		for (i = 101; i <= 200; i++) {
			file << " " << i;
			if (i % 10 == 0)file << endl;
			file.flush();
		}

		file.close();
	}
	else {
		cout << "Fail to open file!" << endl;
	}

}