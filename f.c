#include<stdio.h>
int main()
{
   int a[10],i,n;
   printf("how many? : ");    
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d", &a[i]);
    }
    printf("\narray is: ");
    for(i=0;i<n;i++)
    {
    printf("%d  ", a[i]);
    }
    return 0;
}
