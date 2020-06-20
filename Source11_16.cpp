#include <iostream>
#include <string>
using namespace std;

void main()
{
	string str = "I graduated from tsinghua university.";
	string sub = "Northwest ";

	str.erase(17, 8);//I graduated from  university.
	cout << str << endl;

	string::iterator it;
	it = str.begin() + 17;
	it = str.erase(it);//I graduated from university
	cout << str <<endl;
	str.insert(it, sub.begin(), sub.end());//I graduated from Northwest university
	cout << str << endl;
}