#include<stdio.h>
int main()
{
    int a =10;
    int b = 20;
    int c;


    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);


    c = a;
    a = b;
    b = c;

    printf("The swap value of a is : %d\n",a);
    printf("The swap value of b is : %d\n",b);

    return 0;
    


}