#include<conio.h>
#include<stdio.h>
void main()
{
int a;
int variable;
 float r;
printf("enter the no.");
    scanf("%d",&a);
   int decimalnumber = 0;
   int temp=1;
 while(a > 0)
 {
      r= a % 10;
     variable = r*temp;
     a=a/10;
     temp=temp*2;
     decimalnumber =  decimalnumber+ variable;

 }
 printf("%d", decimalnumber);
}
