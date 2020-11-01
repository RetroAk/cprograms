#include<stdio.h>
int main()
{
 int a,t, i, j, n[30];
 printf("how many numbers to be sorted?? ");
 scanf("%d",&a);
 printf("enter %d numbers \n",a);
  for(i=0;i<a;i++)
   scanf("%d",&n[i]);
  for(i=a-2;i>=0;i--)
  {
   for(j=0;j<=i;j++)
   {
    if(n[j]>n[j+1])
     {
       t=n[j];
       n[j]=n[j+1];
       n[j+1]=t;
     }
    }
   }
 printf("result: ");
  for(i=0;i<a;i++)
   printf(" %d",n[i]);
 return 0;
}
