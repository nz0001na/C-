#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	fstream f;
	char ch,c;
	int i = 0;
	char * str = "I am Zhang , hellp hahah.nissoew.....";
	f.open("E:/test.txt", ios_base::in);
	if (!f.is_open()) {
		cout << "Can not open file!" << endl;
	}
	else {

		do{
			ch = f.get();
			cout << ch;
		} while (f.good() && ch != '\0');

		cout << endl;

		f.close();
	}




	f.open("E:/test.txt", ios_base::out);
	if (f.is_open()) {
		do {
			c = str[i];
			f.put(c);
			i++;
		} while (c != '\0');

		f.close();
	}
	

}