#include <stdio.h>
int main()
{
    char char;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&char);
    isLowercaseVowel = (char == 'a' || char == 'e' || char == 'i' || char == 'o' || char == 'u');
    isUppercaseVowel = (char == 'A' || char == 'E' || char == 'I' || char == 'O' || char == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", char);
    else
        printf("%c is a consonant.", char);
    return 0;
}
