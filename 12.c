#include <stdio.h>
int main()
{
    int num, reversedInteger = 0, remainder, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalInteger = num;
    while( num!=0 )
    {
     remainder = num%10;
     reversedInteger = reversedInteger*10 + remainder;
     num /= 10;
    }
    if (originalInteger == reversedInteger)
    printf("%d is a palindrome.", originalInteger);
    else
    printf("%d is not a palindrome.", originalInteger);
    return 0;
}
