#include<stdio.h> 
#include<math.h>
 
int main()
{
int m, j, sum = 0;
printf("Enter a positive integer: ");
scanf("%d",&m);
for(j=1; j <= m; ++j)
{
 sum = sum+j;
 }
 printf("Sum = %d",sum);
 return 0;
}
