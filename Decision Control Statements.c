// Even & ODD number
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Integer Number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Even Number is:\n %d",num);
    }
    else
    {
        printf(" ODD Number is:\n %d",num);
    }
    return 0;
}
*/

// Divisible by 5 or not

/*
#include<stdio.h>
int main()
{
    int num,div;
    printf("Enter the Number:");
    scanf("%d%d",&num,&div);
    if(num%div==0)
    {
        printf("Divisible by 5 %d",div);
    }
    else
        {
            printf("Divisible not by 5 %d",div);
        }
    return 0;
}
*/

//Divisible By both 5 Or 11
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if( num%5==0 && num%11==0)
    {
        printf("Divisible by both 5 & 11:\n");
    }
         else if( num%5 == 0)
         {

        {
            printf("Divisible by 5:\n");
        }
        if(num%11==0)
        {
            printf("Number is Divisible is 11:\n");
        }
        else
        {
            printf("Number is not divisible is 11:");
        }
         }


      //  /* else if(num%11==0)
         {
             printf("Divisible by:");
         }
             if(num%5==0)
             {
                 printf("Number is Divisible by 11:\n");
             }
             else
                {
                    printf("Number is not divisible by 11:");
                }
         }
        //


    else
    {
        printf("THe number is nor divisible is 5 & 11:");
    }

}
*/

//Basic Calculator

/*
#include<stdio.h>
int main()
{
    int num1,num2,result;
    char choise;
    printf("Enter the Fast NUmber:");
    scanf("%d",&num1);
    printf("Enter the Choise(+,-,*,/):");
    scanf(" %c",&choise);
    printf("\n Enter the 2nd Number:");
    scanf("%d",&num2);

    switch(choise)
    {
        case '+':
        {
            printf("result=%d",num1+num2);
            break;
        }
        case '-':
        {
            printf("result=%d",num1-num2);
            break;
        }
        case '*':
        {
            printf("result=%d",num1*num2);
            break;
        }
        case '/':
        {
            printf("result=%d",num1/num2);
            break;
        }
        default:
            {
                printf("Try Again Wrong Input:");
                break;
            }
    }


return 0;
}

*/


//Switch case
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:\n");
    scanf("%d",&num);

    switch (num%2)
    {
case 0:
    {
        printf("Enter the Even Number:");
        break;
    }
case 1:
    {
        printf("Enter the ODD Number :");
        break;
    }
default:
    {
        printf("TRy Again:");
        break;
    }

}
printf("\n Out of Switch:");
}


