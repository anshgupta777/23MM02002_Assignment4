#include<stdio.h>
void main()
{
    float num1, num2,result;
    int ch;
    printf("Enter the two numbers: ");
    scanf("%f%f",&num1,&num2);
    printf("\n1: Addition");
    printf("\n2: Substraction");
    printf("\n3: Multiplication");
    printf("\n4: Division");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        result=num1+num2;
        printf("Sum of the two given numbers: %f",result);
        break;
        case 2:
        result=num1-num2;
        printf("Difference of the two given numbers: %f",result);
        break;
        case 3:
        result=num1*num2;
        printf("Product of the two given numbers: %f",result);
        break;
        case 4:
        result=num1/num2;
        printf("Quotient of the two given numbers : %f",result);
        break;
        default:
        printf("Invalid Input");
        break;
    }

}