#include <stdio.h>

void main()
{
  FILE * file;
  char str[30],str2[30];
  
  for(int i=0; i<26;i++)
  {
    str[i]='A'+i;
  }

  file=fopen("G:/myfile.txt","w");
  if(file==NULL)
  {
    printf("fail to open file!\n");
  }else 
  {
     fwrite(str, sizeof(char), 26, file);
     fclose(file);
   }


  file=fopen("G:/myfile.txt","r");
  if(file==NULL)
  {
    printf("Can not open file.\n");
  }else{
  
   fread(str2,sizeof(char),26,file);
  
   printf("%.26s",str2);
   fclose(file);
  }






}