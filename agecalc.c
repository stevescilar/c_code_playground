/** Author: Muambi Stephen
    1/10/2021
    email:me@stevemuambi.com
    OR stevemuambi@gmail.com
WOTE TTI STRUCTURED PROGRAMMING CLASS.
**/

/** simple program to calculate the age of a person/user
    NOTE: WE GET DATA FROM THE USER.
    RUN THE PROGRAM FIRST THEN TRY TO UNDERSTAND HOW IT WORKS
    WE MEET NEXT CLASS
**/
#include<stdio.h>
#define NEWLINE '\n'
int main(){
    //declare variables
    int cy;
    int yob;
    char name[20];//char data type with variable capacity of 20 characters

    printf("\n");
    printf("===================|Age Calculator Structured Programming|=====================\n");
    printf("Hi whats your name:\n");
    scanf("%s",&name);
    printf("Enter the current Year:%s _ ",name);
    scanf("%d",&cy);
    printf("Please type in the Year your are born %s _ \n",name);
    scanf("%d",&yob);
    printf("===================|OutPut|=============================\n\n");
    printf("You have entered :%d",cy);
    printf(" as current year\n");
    printf("You have entered :%d",yob);
    printf(" as year of birth\n\n");
    printf("========================================================\n\n");
    int age = cy-yob;

    printf("you are %d",age);
    printf(" years old ");
    printf("%s :",name);
    printf("\n\n\n");

    printf("===================|EOF|================================\n");
    printf("simple things matter,take small steps and you will run efficiently\n\n");
    return 0;
}
