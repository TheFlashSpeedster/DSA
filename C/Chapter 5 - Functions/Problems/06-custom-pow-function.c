// Make your own pow() function without library

#include <stdio.h>

int customPow(int n, int x)
{
  int out = 1;
  for (int i = 0; i < x; i++)
  {
    out *= n;
  }
  return out;
}

int main()
{
  int n, e;
  printf("Enter Number & Power: ");
  scanf("%d%d", &n, &e);

  int ans = customPow(n, e);
  printf("%d ^ %d = %d\n", n, e, ans);
}