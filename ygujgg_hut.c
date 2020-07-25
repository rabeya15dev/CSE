#include<stdio.h>
int main()
{
    char ch;
    printf("enter the char:\n");
    scanf("%c",&ch);

    if( ch =='a'|| ch=='e' || ch=='i' || ch == 'o' ||ch=='u'||
       ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
        printf("%c is a vowel", ch);
    }

     else if
        ((ch>= 'a' && ch<='z') || (ch>='A' && ch<='Z'))

     {
         prinitf ("%c is a consonant" ,ch);
     }


     else
      {
           printf("%c is not of alphabet ", ch );

      }
      return 0;


}

