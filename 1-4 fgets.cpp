#include <stdio.h>
#include <stdlib.h>

void main()
{
  FILE * file;
  char str[60];
 // char * str;
 // str = (char *)malloc(sizeof(char)*60);

 
  file = fopen("G:/read.txt","r");

  if(file==NULL){ printf("can not open file!\n"); }
  else{
  
      while(fgets(str, 60, file)!=NULL)
	  {
	    printf("%s\n",str);
	  }

      
      fclose(file);
  }

}