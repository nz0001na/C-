#include <stdio.h>
#include <stdlib.h>

void main()
{
  //char name[20]; //�ַ�����
  char * name;
  name=(char*)malloc(sizeof(char)*20);  //�ַ���ָ��


  printf("Please input your name:\n");

  gets(name);

  printf("The name you input is %s.\n",name);


}