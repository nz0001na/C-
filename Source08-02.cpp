#include <iostream>
using namespace std;

void main()
{
	cout.setf(ios_base::right, ios_base::adjustfield);
	cout.width(10);
	cout << 'A' << endl;

	ios_base::fmtflags ff;
	ff = cout.flags();
	ff &= ~ cout.basefield;
	ff |= cout.hex;
	ff |= cout.showbase;
	cout.flags(ff);
	cout << 100 << endl;

	cout.unsetf(ios_base::showbase);
	cout << 100 << endl;



	


}