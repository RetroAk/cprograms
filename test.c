#include <stdio.h>
#include <stdlib.h>
int multiplyNum(int , int);
int add(int , int);
int subNum(int , int);
float divide(float , float);
int sum (int a);
int main()
{
int n1,n2,p,n3,n4,a,n5,n6,s;
int n,r;
float n7,n8,d;
printf("multiplication......\n");
printf("Enter 2 no: ");
scanf("%d %d",&n1,&n2);
p=multiplyNum(n1,n2);
printf("product: %d\n",p);
printf("addition......\n");
printf("enter 2 no: ");
scanf("%d %d",&n3,&n4);
a=add(n3,n4);
printf("result: %d\n",a);
printf("subtraction......\n");
printf("enter 2 no: ");
scanf("%d %d",&n5,&n6);
s=subNum(n5,n6);
printf("result2: %d\n",s);
printf("division......\n");
printf("enter 2 no: ");
scanf("%2f %2f",&n7,&n8);
d=divide(n7,n8);
printf("result3: %2f\n",d);
printf("sum of digits......\n");
printf("enter the no: ");
scanf("%d", &n);
r= sum(n);
printf("sum of digits: %d\n",r);
return 0;
}
int multiplyNum(int n1, int n2)
{
int product=n1*n2;
return product;
}
int add(int n3, int n4)
{
int result=n3+n4;
return result;
}
int subNum(int n5, int n6)
{
int result2=n5-n6;
return result2;
}
float divide(float n7, float n8)
{
float result3=n7/n8;
return result3;
}
int sum (int n)
{
    if (n != 0)
    {
        return (n % 10 + sum (n / 10));
    }
    else
    {
       return 0;
    }
}
