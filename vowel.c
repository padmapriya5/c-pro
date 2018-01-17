#include<studio.h>
int main()
{
    char c;
    int LowercaseVowel, UppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);
   LowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'b' || c == 'u');
    UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'B' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
