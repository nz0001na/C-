#include <iostream>
#include <string>
using namespace std;

void main() {
	string str = "C:\\Ghost\\ghostxp.exe";
	int pos = str.find_last_of("\\");
	string folder = str.substr(0, pos);
	string file = str.substr(pos + 1);
	cout << "folder:" << folder << endl;
	cout << "file:" << file << endl;


}
