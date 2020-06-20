#include <stdio.h>

void main()
{
  printf("char: %c  %c\n",'A',98);
  printf("int: %d  %ld\n", 2010, 6553500L);
  printf("doox: %d  %o  %x, %#o  %#x\n",56,56,59,56,59);
  printf("腎鯉野割: %9d, 0野割: %a9d\n", 2012,2013);
  printf("float: %4.2f  %+.0E, %E\n",9.8254,9.8254,9.8254);
  printf("output %: %f%% \n",1.0/3);
  printf("string: %s\n","Hello");
}