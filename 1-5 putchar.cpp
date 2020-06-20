#include <stdio.h>

void main()
{
   char str[] = "Welcome to West Virginia University! ";
   int i=0;

   while (str[i])
   {
      putchar(str[i]);
      i++;
   }

   printf("\n");

}