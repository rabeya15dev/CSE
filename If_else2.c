/*
#include<stdio.h>
int main()
{
    int upo;
    printf("Enter the Number:");
    scanf("%d",&upo);
    if(upo%2==0)
    {
        printf(" Even Number:%d",upo);
    }
    else
    {
        printf(" Odd Number:%d",upo);
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int num1,div;
    printf("Enter the two Number:");
    scanf("%d%d",&num1,&div);
    if(num1%div==0)
    {
        printf(" The number is divisible by:%d",num1);
    }
    else
    {
        printf(" The number is not divisible by:%d",div);
    }
    return 0;
}
*/


//Write a C program to find the largest of three numbers



#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Three Numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
          if(a>c)
       {
        printf("The 1st Number is the greatest among three:\n%d",a);
       }
       else
       {
        printf("The 3nd Number is the greatest among three:%d ",b);
       }
    }
    else if(b>c)
    {
        printf(" The 2nd Number is the greatest among three:%d",c);
    }

    else

    {
        printf("  the greatest among three:");
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

    if(num%5==0 && num%11==0)
    {
        printf("The number is divisible both:\n");
    }
    else if(num%5==0)
    {
        printf("The number is divisible by 5:\n");
        if(num%11==0)
        {
            printf("The number is divisible by 11:\n");
        }
        else
            {
                printf("The number is not divisible by :\n");
            }
    }

    else
    {
        printf("The number is not divisible Both:\n");
    }
    return 0;
}
*/

