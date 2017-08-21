#include <stdio.h>
int main()
{
   int num, j, flag = 0;
   printf("Enter a positive integer: ");
   scanf("%d",&num);
   for(j=2; j<=num/2; ++j)
   {
   if(num%j==0)
   {
   flag=1;
    break;
    }
    }
    if (flag==0)
    printf("%d is a prime number.",num);
    else
    printf("%d is not a prime number.",num);
    return 0;
}
