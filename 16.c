#include <stdio.h>
int main()
{
int l, h, j, flag;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &l, &h);
printf("Prime numbers between %d and %d are: ", low, high);
while (l< h)
 {
  flag = 0;
  for(j = 2; j <= l/2; ++j)
  {
    if(l% j == 0)
    {
    flag = 1;
     break;
      }
      }
      if (flag == 0)
      printf("%d ", l);
      ++l;
       }
       return 0;
}
