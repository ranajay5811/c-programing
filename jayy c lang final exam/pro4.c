#include <stdio.h>
int main()
{
    char Alphabet;
    printf("Enter the alphabet : ");
    scanf("%c", &Alphabet);

    if (Alphabet >= 'A' && Alphabet <= 'Z' || Alphabet >= 'a' && Alphabet <= 'z')
    {
        if (Alphabet == 'A' || Alphabet == 'E' || Alphabet == 'I' || Alphabet == 'O' || Alphabet == 'U' || Alphabet == 'a' || Alphabet == 'e' || Alphabet == 'i' || Alphabet == 'o' || Alphabet == 'u')
        {
            printf("This alphabet is vowel");
        }
        else 
        {
            printf("This alphabet is constant");
        }
    }
    else{
        printf("Invalid input");
    }
}

