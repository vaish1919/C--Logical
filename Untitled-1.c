#include <stdio.h>

int main()
 {
    int a, b;
    int max;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    max = a;

    while (b > max) 
    {
        max = a;
    }

    printf("The max number is: %d\n", max);

    return 0;
}
