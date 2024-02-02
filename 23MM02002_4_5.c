#include<stdio.h>
void main()
{
    int num,i,d,s=0,c;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    if(num>=100&&num<=999)
    {
        for(i=num;i>0;i/=10)
        {
            d=i%10;
            c=d*d*d;
            s=s+c;
        }
        if(s==num)
        printf("Yes");
        else
        printf("No");

    }
    
    else
    printf("Incorrect Input");
}