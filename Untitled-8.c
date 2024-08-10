#include<stdio.h>
int main()
{
    int roll;
    char name[20], fname[20], mname[30], address[10],contact[11];
    int phy,chem,comp;

    float per,total;
    char division;

    printf("Enter the Roll no: ");
    scanf("%d",&roll);
    printf("Enter the Student name:");
    scanf("%c",&name);
    printf("Enter the fname: ");
    scanf("%c",&fname);
    printf("Enter the mname:");
    scanf("%c",&mname);
    printf("Enter the add: ");
    scanf("%c",&address);
    printf("Enter the COntact:");
    scanf("%c",&contact);


    printf("Enter the marks of all sub: ");
    scanf("%d%d%d",&phy,&chem,&comp);


    total = phy+chem+comp;
    per = total / 3;



    printf("\nTotal marks: %f\n",total);
    printf("Percentage: %f\n",per);
    printf("Division:%c\n",division);

    return 0;



}


