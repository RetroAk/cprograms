#include <stdio.h>
int digitsum(int num);
int main()
{
int digit;
printf("favas -24\n");
printf("Enter a number : ");
scanf("%d",&digit);
printf("The sum of digits is : %d ",digitsum(digit));
}
int digitsum(int num)
{ 
int Reminder, Sum=0; 
while(num!=0)
{ 
Reminder = num % 10; 
Sum=Sum+ Reminder;
num=num/10; 
} 
return Sum; 
}
