#include<stdio.h>
float add(float a, float b)
{
   float sum;
   sum = a + b;
   return sum;
}
float multiply(float e,float f)
{
   float p;
   p=e*f;
   return p;
}
int main()
{
     float c,d,g,h,r1,r2,r3,r4;
     printf("enter two no: ");
     scanf("%f %f",&c,&d);
     r1= add(c,d);
     printf("%.2f + %.2f = %.2f\n",c,d,r1);
     printf("enter two no for multiplication: ");
     scanf("%f %f",&g,&h);
     r2=product(g,h);
     printf("%.2f * %.2f =%.2f\n",g,h,r2);
     return 0;
}
