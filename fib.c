#include<stdio.h>
int f(int);
int main() 
{
   int n;    
   printf("what are fibonacci numbers?? \n A series of numbers in which each number is the sum of the two preceding numbers.\n");
   printf("enter the no \n");
   scanf("%d",&n);
   f(n);
   return 0;
}
int f(int n)
{
 int i,c=0;
 int a=0;
 int b=1;
 printf("fibonacci series for %d terms: \n",n);
   for(i=0;i<n;i++)
   {
    printf("%d ",c);
    a=b;
    b=c;
    c=a+b;
   }
 return c;
}

