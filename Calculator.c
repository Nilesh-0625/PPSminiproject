#include<stdio.h>
int main(){
    int num1,num2;
    int choice;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("The sum of the given two numbers is %d\n",num1+num2);
    break;
    case 2:
    printf("The difference of the given numbers is %d\n",num1-num2);
    break;
    case 3:
    printf("The product of the given numbers is %d\n",num1*num2);
    break;
    case 4:
    printf("The quotient of the given number is %.4f\n",num1/(float)num2);
    break;
    default:
        printf("Invalid Operator\n");
        break;
    }
    return 0;
}