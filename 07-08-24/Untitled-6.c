#include<stdio.h>
int main()
{
    char ch;
    int a,b;

    printf("Enter a character(s/w): ");
    scanf("%c",&ch);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(ch == 's')
    {
        printf("Before Swap: a=%d, b=%d\n",a,b);
        a = a+b;
        b = a-b;
        a = a -b;

        printf("After Swap: a =%d , b=%d\n",a,b);

    }
    else if(ch == 'w')
    {
        int c;
        printf("Before Swap: a=%d, b=%d\n",a,b);

        c = a;
        a = b;
        b = c;

        printf("After Swap: a=%d , b=%d\n",a,b);


    }
    else
    {
        printf("Input Invalid");
    }

    return 0;
    

}