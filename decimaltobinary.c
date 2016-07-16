#include<stdio.h>
void main()
{
    int a,r,j;
    int s[100];

    printf("enter the value");
    scanf("%d",&a);
    int i=0;
   while(a != 0)
    {

        r=a%2;
        a = a/2;
        s[i]=r;
        i=i+1;
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%d",s[j]);
    }

}









