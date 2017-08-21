#include <stdio.h>
int main()
{
    char char;
    printf("Enter a character: ");
    scanf("%c",&char);

    if( (char>='a' && char<='z') 
        printf("%c is an alphabet.",char);
    else
        printf("%c is not an alphabet.",char);

    return 0;
}
