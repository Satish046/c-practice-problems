#include <stdio.h>

int main() {
    int age = 21;
    int *ptr = &age;
    printf("%u\n", ptr);
ptr++;
printf("%u",ptr);
    return 0;
}