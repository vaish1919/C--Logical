1-->10 number print for loop
#include <stdio.h>

int main()
{
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
    }
 

    return 0;
}
-----------------------------------------------------------------
50-->100 number print for loop
#include <stdio.h>

int main()
{
    for(int i=50;i<=100;i++){
        printf("%d\n",i);
    }
 

    return 0;
}
-----------------------------------------------------------------
56-->78 number print for loop
#include <stdio.h>

int main()
{
    for(int i=56;i<=78;i++){
        printf("%d\n",i);
    }
 

    return 0;
}
-----------------------------------------------------------------
10---->1 number print for loop
#include <stdio.h>

int main()
{
    for(int i=10;i>=1;i--){
        printf("%d\n",i);
    }
 

    return 0;
}
-----------------------------------------------------------
100----->50
number print for loop
#include <stdio.h>

int main()
{
    for(int i=100;i>=50;i--){
        printf("%d\n",i);
    }
 

    return 0;
}
-----------------------------------------------------------
78---->56  number print for loop
#include <stdio.h>

int main()
{
    for(int i=78;i>=56;i--){
        printf("%d\n",i);
    }
 

    return 0;
}
-----------------------------------------------------------

1--->5 even number : 
#include <stdio.h>

int main()
{
    
    for(int i=1;i<=5;i++){
        if(i%2==0){
        printf("%d\n",i);
        }
    }
 

    return 0;
}
------------------------------------
78--->56 odd number
#include <stdio.h>

int main()
{
    
    for(int i=78;i>=56;i--){
        if(i%2!=0){
        printf("%d\n",i);
        }
    }
 

    return 0;
} 
-------------------------------------
1--->10 number sum for loop through 

#include <stdio.h>

int main()
{
    int sum=0;
    for(int i=1;i<=10;i++){
       sum += i;
    }
    printf("%d",sum);
    printf("\n");
 
    return 0;
}

-----------------------------------------------------------------------
factorial
#include <stdio.h>

int main()
{

    int factorial = 1;
    for(int i=1;i<=5;i++){
       factorial *= i;
    }
    printf("factorial is %d",factorial);
    printf("\n");
 
    return 0;
}
--------------------------------
Fibonacci series
#include <stdio.h>

int main()
{
int first=0, second = 1, next;
    for(int i=3; i<=5;i++){
        next=first+second;
        printf(" %d",next);
        first = second;
        second = first;
    }
    printf("\n");
    return 0;
} 