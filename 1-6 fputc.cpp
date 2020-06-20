#include <stdio.h>

void main()
{
  FILE *  file;
  char ch;
  int i=0;
  char str[]="Welcome to China, Jay. haha!";
  file=fopen("G:/write.txt","w");

  if(file == NULL)
  {
    printf("Cannot open file!\n");
  }else{
  
	  while(str[i]!='\0')
	  {
		 fputc(str[i],file);
		 i++;
	  }
      fclose(file);
  }

  file= fopen("G:/write.txt","r");
  if(file==NULL)
  { printf("can not open file!"); }
  else{

     do{

		  ch=fgetc(file);
		  putchar(ch);
	  }while(ch!=EOF);

    fclose(file);
  }


}
