#include<conio.h>
#include<stdio.h>
#include<math.h>

float  fx(float x);
float mid(float a,float b);


void main()
{
    int count=0,max_count=4,x=1;
    float c,a=0,b=1,error=0.009,mi;

    while(x)
    {
        if(fx(a)<0 && fx(b)>0)
        {


          //  if(fx(mi)>0)
            x=0;
        }
        else
        {
            a++;
            b=a+1;
        }

    }
    while(count<max_count)
    {

    mi= mid(a,b);
    if(fx(mi)<0){
        a= mi;
    }
    else{
        b= mi;
    }

    count++;
    }
    printf("%f",mi);
getch();
}


float fx(float x){
    float c;
    c=(x*x*x)-(2*x)-5;
   // printf("cnscl");
    return c;
}
float mid(float a,float b)
{
    return ((a+b)/2);
}
