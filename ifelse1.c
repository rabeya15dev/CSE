/*
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the integer number:\n");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
    {
        printf("num1 and num2 are equal:\t");
    }
    else
        {
            printf("num1 and num2 are not equal");
        }

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    num1 % 2;
    if (num1 == 0)
    {
        printf("Even number is:%d",num1);
    }
    else
    {
        printf("Odd number is:%d",num1);
    }
    return 0;
}      //Output 0 &1 ase kno??

*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num % 2==0)  // num % 2==0
    {
        printf("even number is:%d",num);
    }
    else
    {
        printf("Odd number is :%d",num);
    }
    return 0;
}


/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("The Number is positive:%d",num);
    }
    else
    {
        printf("The Number is Negative:%d",num);
    }
    return 0;
}
*/

