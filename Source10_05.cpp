#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	fstream in, out;
	char buff[40];
	int length;
	in.open("in.txt", ios_base::in);
	out.open("out.txt", ios_base::out);
	if (in.is_open()&&out.is_open()) {
		while (!in.eof()) {
			in.read(buff, 40);
			length = in.gcount();
			out.write(buff, length);

	  }
		in.close();
		out.close();
	}
	else {
		cout << "Fail to open in file!" << endl;
	}

}