#include <stdio.h>

int main(void)
{
    char name[40];
    printf("cual es tu nombre? \n ");
    scanf("%39[^\n]", name);
    printf("Hola %s!\n", name);
}