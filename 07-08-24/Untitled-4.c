#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' || ch == 'y' ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p')
    {
        printf("Upper Line");
    }
    else if (ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l')
    {
        printf("Mid Line");
    }
    else if (ch == 'z' || ch == 'x' || ch == 'c' || ch == 'v' || ch == 'b' || ch == 'n' || ch == 'm')
    {
        printf("Lower Line");
    }
    else
    {
        printf("Input is not valid");
    }
    return 0;

}