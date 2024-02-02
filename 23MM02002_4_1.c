#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int con=num%2==0;
    switch(con)
    {
        case 1:
        printf("%d is an even number",num);
        break;
        default:
        printf("%d is an odd number",num);
        break;

    }
}