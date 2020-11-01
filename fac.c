#include <stdio.h> 
int fact(int);
int main()
{
 int n,f;
 printf("enter the no\n");
 scanf("%d",&n);
 f=fact(n);
 printf("factorial of the no %d= %d\n",n,f);
}
int fact(int n)
{
 int i,f=1;
 for(i=1;i<=n;i++)
 {
  f=f*i;
 }
 return f;
}
