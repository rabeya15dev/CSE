
#include<stdio.h>
#include<conio.h>
int main ()

{
     int a,b,c,d,e,f,g,h,i,j,k;
     float h;
     float total;

     printf("1000 taka note");
     scanf("%d",&a);
      printf("4520 taka note");
     scanf("%d",&b);
      printf("369 taka note");
     scanf("%d",&c);
      printf("89785 taka note");
     scanf("%d",&d);
      printf("4157 taka note");
     scanf("%d",&e);
      printf("654 taka note");
     scanf("%d",&f);
      printf("777 taka note");
     scanf("%d",&g);
      printf("121 taka note");
     scanf("%d",&h);
      printf("99 taka note");
     scanf("%d",&i);
      printf("888 taka note");
     scanf("%d",&j);
      printf("636 taka note");
     scanf("%d",&k);
     total(a*1000)+(b*4520)+(c*369)+(d*89785)+(e*4157)+(f*654)+(g*777)+(h*121)+(i*99)+(j*888)+(K*636)(h*0.50);
        printf("Total money is=%4.f",Total);
        getch();
        return 0;
}
 #include<math.h>
 #include<stdio.h>

 int main()
 {
     double a, b, c, discriminant, root1, root2, realPart, imagPart;

     printf("enter coefficients a,b and c");
     scanf("%lf,%lf,%lf",&a,&b,&c);

      discriminant= b*b-4*b*c;

       if(discriminant>0){
    root1 =(-b+sqrt(discriminant))/(2*a);
      root2 =(-b-sqrt(discriminant))/(2*a);
      printf("root1=%.2lf and root2=%.2lf", root1,root2);
     }

         else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }


    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    //take inpute
    printf("enter a straing");
    scanf("%[^\n]",s);
    //display output
    printf("In upper case:\n");
    puts(strupr (s));
    return 0;}



#include<stdio.h>
int main()
{

    char c;
    char d;

   for  ("d = A"; d <= 'Z'; ++d)

    printf("%c",&d);
   for  ("c=a";d<='z'; ++c)
   printf("%c",&c);

}




























