#include<stdio.h>
void main()
{
    int age;
    float tktp,disc;
    printf("Enter the age of the person");
    scanf("%d",&age);
    if(age<5)
    tktp=0.0;
    else if(age>=5&&age<=12)
    tktp=20.0;
    else if(age>=13&&age<=59)
    tktp=50.0;
    else
    {
        disc=0.2*50;
        tktp=50-disc;
    }
    printf("The ticket price generated for the given age: %f",tktp);
}