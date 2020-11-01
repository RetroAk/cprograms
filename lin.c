#include <stdio.h>
int main()
{
  int arr[100],f, c, n;
  printf("enter the no of elements\n");
  scanf("%d", &n);
  printf("enter %d numbers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);
  printf("enter a no to search\n");
  scanf("%d", &f);
  for (c = 0; c < n; c++)
  {
    if (arr[c] == f)
    {
      printf("%d is present at location %d.\n", f, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d not presenT\n", f);
   return 0;
}
