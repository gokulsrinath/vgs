#include <stdio.h>
#include <math.h>

int main()
{
int low, high, j, t1, t2, remainder, n = 0, result = 0;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &low, &high);
printf("Armstrong numbers between %d an %d are: ", low, high);
for(j = low + 1; j< high; ++j)
{
 t2 = j;
 t1 = j;
 while (t1 != 0)
 {
  t1 /= 10;
  ++n;
  }
  while (t2 != 0)
  {
  remainder = t2 % 10;
  result += pow(remainder, n);
  t2 /= 10;
  }
  if (result == j) 
  {
  printf("%d ", j);
  }
  n = 0;
  result = 0;
  }
  return 0;
}
