#include <stdio.h>

void main()
{
  FILE * file;
  file=stdin;

  //char str[]="I am a beautiful girl!";
  char str[500];
  printf("Please input some letters:\n");
  fgets(str,8,file);



  file=fopen("G:/write.txt","w");

    if(!file)//if(file==NULL)
	{
	  printf("Can not open file!\n");
	}else{

  fputs(str,file);

  fclose(file);
}


}
