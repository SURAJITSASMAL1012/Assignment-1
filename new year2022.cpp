#include<stdio.h>

int main()
{
    int age;
    
    printf("Enter Your age:");
    scanf("%d",age);
    if(age<18)
    printf("You are a kid and you are not eligible to thr party");
    else if(age>18)
    printf("you arecome to my party");
    return 0;
}