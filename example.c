#include <stdio.h>

int main(void)
{
    int sec;

    printf("Input the seconds: ");
    scanf("%i", &sec);

    printf("Time is %i:%i\n", sec/60, sec%60);

    return 0;
}