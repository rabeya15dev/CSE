#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d,e,f,g;
    float h;
    float total;
    printf("1000 take note");
    scanf("%d",&a);
    printf("500 take note");
    scanf("%d",&b);
    printf("100 take note");
    scanf("%d",&c);
    printf("20 take note");
    scanf("%d",&d);
    printf("10 take note");
    scanf("%d",&e);
    printf("5 take note");
    scanf("%d",&f);
    printf("1 take note");
    scanf("%d",&g);
    printf("0.50 take note");
    scanf("%f",&h);
    total=(a*1000)+(b*500)+(c*100)+(d*20)+(e*10)+(f*5)+(g*1)+(h*0.50);
    printf("Total money is =%.4f",total);
    return 0;
}

#include<stdio.h>
int main()
{
    int amount;
    int note500,note100, note50,note20,note10,note5,note2,note1;
       note500=note100=note50=note20=note10=note5=note2=note1=0;
       printf("enter amount:");
       scanf("%d",&amount);

       if(amount>=500)
       {
       note500 = amount/500;
       amount -= note500*500;
    }
   if (amount>=100) {
        note100=amount/100;
       amount -= note100*100;
   }
       if(amount>=50)
        {
       note50=amount/50;
       amount -= note50*50;
        }
       if ("amount>=20")
        {
        note20=amount/20;
       amount -= note20*20;
        }
       if(amount>=10)
       {
       note10=amount/10;
       amount -= note10*10;
       }
       if(amount>=5)
       {


       note5=amount/5;
       amount -= note5*5;
       }
       if(amount>=2)
       {
       note500=amount/2;
       amount -= note2*2;
         }
         if(amount>=1)
         {
       note1=amount/1;

        }
      printf("Total number of notes \n");
      printf("500=%d\n",note500);
      printf("100=%d\n",note100);
      printf("50=%d\n",note50);
      printf("20=%d\n",note20);
      printf("10=%d\n",note10);
      printf("5=%d\n",note5);
      printf("2=%d\n",note2);
      printf("1+%d\n",note1);
      return 0;

}

#include<stdio.h>
int main()
{
    int cost_prize,cell_prize,result;
    printf("Enter the cost prize:\n");
    scanf("%d",&cost_prize);
     printf("Enter the sell_prize:\n");
     scanf("%d",&cell_prize);
     result= cost_prize - cell_prize;

     if( result >0)
       {

        printf("profit:%d\n",result);
     }
    else {
        printf("loss:%d\n",result);

    }

    return 0;
}

 #include<stdio.h>
int main()
{
    int num1,num2;
    float result;
    char ch;
    printf("Enter fast number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    printf("Choose operation to perform(+,-,*,/,%):");
    scanf("%c",ch);
    result=0;
    switch (ch)
    {
    case '+':
    result= num1+num2;
    break;
    case '-':
    result= num1-num2;
    break;
    case '*':
    result=num1*num2;
    break;
    case'/':
    result=num1/num2;
    break;
    case'%':
    result=num1%num2;
    break;
    default:
    printf("Invalid operation :\n");
   }
   printf("Result:%d%c%d=%f\n",num1,ch,num2,result);
   return 0;
}




















