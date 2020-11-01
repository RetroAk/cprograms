#include <stdio.h>
int mul(int ,int );
int main()
{
int mul(int,int),num1,num2,prod;
printf ("entr 1st");
scanf("%d",&num1);
printf ("entr 2nd");
scanf("%d",&num2);
prod=mul(num1,num2);
printf ("product of %d and %d is:%d\n",num1,num2,prod);
return 0;
}
int mul(int n1,int n2)
{ int prod=n1*n2;
return prod;
}
