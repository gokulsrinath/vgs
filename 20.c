#include <stdio.h>
int main()
{
 int num, j;
 printf("Enter an integer: ");
 scanf("%d",&num);
 for(j=1; j<=10; ++j)
 {
  printf("%d * %d = %d \n", num, j, num*j);
  }
 return 0;
}
