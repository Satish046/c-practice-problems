#include<stdio.h>
int main()
{
    int age;
    printf("enter ege :");
    scanf("%d", &age);
    if (age >=18){
    printf("adult \n");
    }
    else if (age >13 && age<18);
    {
    printf("teenage \n");
    }
     else
    {
        printf("child");
    }
    
    return 0;
}