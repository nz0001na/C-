#include <stdio.h>
#include <stdlib.h>

void main()
{
  //char name[20]; //×Ö·ûÊý×é
  char * name;
  name=(char*)malloc(sizeof(char)*20);  //×Ö·û´®Ö¸Õë


  printf("Please input your name:\n");

  gets(name);

  printf("The name you input is %s.\n",name);


}