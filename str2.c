#include<stdio.h>
#include<string.h>
int main ()
{
  char str1[55] ="testing";
  char str2[20]="test";

  char *p;
  p = strstr (str1, str2);
  if(p)
  {
    printf("string found\n" );  //i.e str2 is a substring of str1. 
    printf ("blahh\"test\"\"%s\""\
           " \"%s\"",str1, p);
  }
  else printf("string not found\n" );  // str2 is not a substring of str1.
   return 0;
}
