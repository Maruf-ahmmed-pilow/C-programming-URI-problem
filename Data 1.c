#include <stdio.h>

int main()
{
  int array[100], search, i, n;

  printf("Enter the number of elements for array :");
  scanf("%d", &n);

  printf("Enter %d numbers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i=0;i<n;i++)
  {
    if (array[i] == search)
    {
      printf("%d is present at position %d.\n", search, i-0);
      break;
    }
  }
  if (i == n)
    printf("%d not found\n", search);

  return 0;
}
