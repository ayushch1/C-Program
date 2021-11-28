#include<stdio.h>

int main(){
    char ch;
    printf("Input a character");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
         printf("%c it is a vowel\n",ch);
        break;
        default:
        printf("%c it is not a vowel\n",ch);
    }
    getch();
    }