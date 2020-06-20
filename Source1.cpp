#include <iostream>
#include <fstream>
//#include <stdio.h>

using namespace std;

void main()
{
	/*int t = 67;
	
	printf("%d \n", t); 

	char str[20];
	FILE * file;
	file = fopen("E:/kk.txt", "wr");
	if (file == NULL) { printf("Cannot open file\n"); }
	else
	{
		fread(str, sizeof(char), 4, file);
		fclose(file);
	}*/

	ifstream ifs("E:/kk.txt", ifstream::in);
	while (ifs.good())
		cout << (char)ifs.get();

	ifs.close();
	
}
