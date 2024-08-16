#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name;
    
};
int main ()
{
    struct student s1={6616,7.0,"satish"};
    printf ("student roll = %d\n", s1);