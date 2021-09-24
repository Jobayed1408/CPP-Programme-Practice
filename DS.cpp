#include <stdio.h>

int main()
{
  int DATA[100], n, k, PTR, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (k = 0; k < n; k++)
    scanf("%d", &DATA[k]);

  for (k= 0 ; k < n - 1; k++)
  {
    for (PTR = 0 ; PTR < n - k - 1; PTR++)
    {
      if (DATA[PTR] > DATA[PTR+1])
      {
        swap       = DATA[PTR];
         DATA[PTR] = DATA[PTR+1];
        DATA[PTR+1] = swap;
      }
    }
  }

  printf("Sorted list is:\n");

  for (k = 0; k < n; k++)
     printf("%d\n", DATA[k]);

  return 0;
}
