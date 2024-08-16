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
    struct student aiml[100];
    aiml[0].roll = 6616;
    aiml[0].cgpa = 7.0;
    strcpy(aiml[0].name,"satish");
    printf("name = %s\n", aiml[0].name);
    return 0;
}