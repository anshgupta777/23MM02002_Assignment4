#include<stdio.h>
void main()
{
    int cs;
    float bal, ist;
    printf("Enter your credit score: ");
    scanf("%d",&cs);
    printf("Enter your credit card balance: ");
    scanf("%f",&bal);
    if(cs<600)
    ist=0.15*bal;
    else if(cs>=600&&cs<750)
    ist=0.12*bal;
    else
    ist=0.1*bal;
    printf("Calculated Interest :%f",ist);
}