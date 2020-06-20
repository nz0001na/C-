#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	filebuf * fbuf;
	long size;
	char * rbuffer;

	ifstream file("E:/test.txt", ifstream::in);
	if (!file.good()) {
		cout << "Fail to open file." << endl;
	}
	else {
		fbuf = file.rdbuf();

		size = fbuf->pubseekoff(0, ios_base::end, ios_base::in);//size
		fbuf->pubseekpos(0, ios_base::in);

		rbuffer = new char(size);
		fbuf->sgetn(rbuffer, size);
		
		
		cout << "The size of this file is " << size << " characters." << endl;
		//cout << "The content of the file is " << rbuffer << endl;
		cout.write(rbuffer, size);
		file.close();

		free(fbuf);

	}
	



}