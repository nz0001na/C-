#include<stdio.h>

void main()
{
   FILE * file;
   char *p;
   char ch;
   char str[]="Welcome to West Virginia University!";
   int i=0;
  
   file=stdout;

   //for(p=str; (*p != '\0')&&(ch!=EOF); p++)
   //{
//	      ch=putc(*p,file);
   //}

   p=str;
   while((*p!='\0')&&(ch!=EOF))
   {
      ch=putc(*p,file);
	  p++;
   }
    printf("\n");


}