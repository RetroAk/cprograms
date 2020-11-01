#include<stdio.h>
int main()
{
int i, j, m, n, a[10][10], count = 0; 
printf("\nEnter Number of rows and columns  :  ");
scanf("%d %d", &m, &n);
printf("\n Enter the Matrix Elements \n");
for(i = 0; i< m; i++)
{
for(j = 0;j< n;j++)
{
scanf("%d", &a[i][j]);
}
}  
for(i= 0; i< n; i++)
{
for(j = 0; j < n; j++)
{
if(a[i][j] == 0)
{
count++;    		
}
}
}
if(count > (i * j)/2)
{
printf("\n The Matrix is a Sparse Matrix ");
}
else
{
printf("\n The Matrix  is Not a Sparse Matrix "); }
}
