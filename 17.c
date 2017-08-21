#include <stdio.h>
int main()
{
 int num, originalNumber, rem, result = 0;
 printf("Enter a three digit integer: ");
 scanf("%d", &num);
 originalNumber = num;
 while (originalNumber != 0)
 {
 rem = originalNumber%10;
 result += rem*rema*rem;
 originalNumber /= 10;
 }
 if(result == num)
 printf("%d is an Armstrong number.",num);
 else
 printf("%d is not an Armstrong number.",num);
 return 0;
}
