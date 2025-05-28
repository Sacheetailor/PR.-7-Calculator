#include<stdio.h>
int main()
{
    int choice;
    int num1 , num2;


    int addition(int num1, int num2)
    {
        return num1 + num2;
    }   
    int subtract(int num1, int num2)
    {
        return num1 - num2;
    }   
    int multiply(int num1, int num2)
    {
        return num1 * num2;
    }
    int divide(int num1, int num2)
    {
        return num1 / num2;
    }
    int modulo(int num1, int num2)
    {
        return num1 % num2;
    }

    for(int i=0;i<200;i++)
    {
        printf("\n 1. addition ");
        printf("\n 2. subtract ");
        printf("\n 3. multiply ");
        printf("\n 4. divide ");
        printf("\n 5. modulo ");
        printf("\n 6 .exit ");

        printf("\n enter your choice: ");
        scanf("%d",&choice);

        if(choice==0)
        {
            printf("\n exit ");
            break;
        }

        else if(choice>=6 || choice<0)
        {
            printf("invalid choice! please try again: ");
            break;
        }
            printf("enter first number: ");
            scanf("%d",&num1);

            printf("enter second number: ");
            scanf("%d",&num2);

        switch(choice)
        {
            case 1:
                printf("%d",addition(num1 , num2));
                break;
            case 2:
                printf("%d",subtract(num1 , num2));
                break;
            case 3:
                printf("%d",multiply(num1 , num2));
                break;
            case 4:
                printf("%d",divide(num1 , num2));
                break;
            case 5:
                printf("%d",modulo(num1 , num2));
                break;
            default :
                printf("invalid choice! please try again: ");
                
            }        
        }   
    return 0;
}                                                                                                                      
    