#include <iostream>
using namespace std;

void main()
{
	char ch,str[40];
	int n;
	cout << "Please inut a numebr or a string:" << endl;
	ch = cin.get();
	 
	if (ch > '0'&&ch < '9')
	{
		cin.putback(ch);
		cin >> n;
		cout << "The number you input is : " << n << endl;
	}
	else {
		cin.putback(ch);
		cin >> str;
		//cin.getline(str, 4);
		cout << "The string you input is:" << str << endl;
	}
}