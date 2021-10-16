//C Program for Grading System

#include<stdio.h>
void main()
{
    float marks;
    printf("Enter Marks:\t");
    scanf("%f",&marks);
    //Displaying Grades according to marks entered
    if(marks<0)
    {
        printf("Incorrect Value Entered");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }
    if(marks>=40 && marks<=54)
    {
        printf("Grade D");
    }
    if(marks>=55 && marks<=69)
    {
        printf("Grade C");
    }
    if(marks>=70 && marks<=84)
    {
        printf("Grade B");
    }
    if(marks>=85 && marks<=100)
    {
        printf("Grade A");
    }
}
