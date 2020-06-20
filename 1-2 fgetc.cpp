#include <stdio.h>

void main()
{
  FILE * file;
  char ch;
  int n=0;

  file=fopen("D:/read.txt","r");
  if(file==NULL)printf("file cannot open!\n");
  else {
  
	  do{
	    //ch=getc(file);
		ch=fgetc(file);
        if(ch>'a'&&ch<'z' || ch>'A'&&ch<'Z')n++;
	  }while(ch!=EOF);
       
      fclose(file);
	   printf("This file has %d chars.",n);
  }

 
  
 
}