

//Program to calculate the Area of a Triangle
#include<stdio.h>

//Given variables as constants
#define HEIGHT 10
#define BASE 20
#define NEWLINE '/n'
#define HALF 0.5

int main()
{
    int areaOfT;

    areaOfT = HALF * BASE * HEIGHT;

    printf("The area is: %d",areaOfT);

    return 0;
}
