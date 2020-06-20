#include <stdio.h>

void main()
{
	char name[20];

   printf("Please input your name:");
   scanf("%s",name);//scanf("%s",&name);
   

   float a,b,c;
   printf("Please input your scores:");
   scanf("%f,%f,%f",&a,&b,&c);


   printf("Your name is: %s\n",name);
   printf("Your scores are: %.2f,%.2f,%.2f\n",a,b,c);
}