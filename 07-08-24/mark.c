#include<stdio.h>
int main(){
    int a,b,c,d,e;
    char ch;
    printf("enter the marks");
    scanf("%c",&ch);
    if(a>36 || b>36 || c>36 || d>36 || e>36){
        printf("pass");
    }
    else{
        printf("fail");
    }
}