#include <iostream>
using namespace std;

void main()
{
	char str[80];
	cout << "Please input your name:" << endl;
	cin.read(str, 8);
	str[8] = '\0';
	cout << "The name you input is:" <<str<< endl;
	

}