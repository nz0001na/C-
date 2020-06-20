#include <iostream>
#include <string>
using namespace std;

void main()
{
	string str = "Information Technology and Math.";
	string sub1 = "Learn ";
	string sub2 = "to or not to";
	string sub3 = "Let us go to school";

	string::iterator it;
	str.insert(0, sub1);//Learn Information Technology and Math.
	cout << str << endl;
	str.insert(6, sub2, 0, 3);//Learn to Information Technology and Math.
	cout << str << endl;
	str.insert(31, "good idea");//Learn to Information Technologygood idea and Math.
	cout << str << endl;
	str.insert(31, 1, '.'); //Learn to Information Technology.good idea and Math.
	cout << str << endl;
	it = str.insert(str.begin(), ' ');// Learn to Information Technology.good idea and Math.
	cout << str<<endl;
	str.insert(str.end(), 2, '.');// Learn to Information Technology.good idea and Math...
	cout << str << endl;
	str.insert(it, sub3.begin(), sub3.begin() + 6);//Let us Learn to Information Technology.good idea and Math...
	cout << str << endl;
}