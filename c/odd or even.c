#include<stdio.h>
int main()
{
    //if 0 is output it is odd
    //if 1 is output it is even
    int x;
    printf("enter a number :");
    scanf("%d", &x);
    printf("%d", x % 2==0);
    return 0;
}