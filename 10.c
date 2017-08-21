#include <stdio.h>
int main()
{
long long num;
int c= 0;
printf("Enter an integer: ");
scanf("%lld", &num);
while(num != 0)
{
num /= 10;
++c;
 }
 printf("Number of digits: %d", c);
}
