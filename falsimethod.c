0#include<conio.h>
#include<stdio.h>
#include<math.h>

float  fx(float );
float mid(float ,float );


void main()
{
    int count=0,max_count=4;
    float a=0,b=1,error=0.009,mi,x=1;

    while(x)
    {
        if(fx(a)<0 && fx(b)>0)
        {
printf("a=%f b=%f \n",a,b);

          //  if(fx(mi)>0)
            x=0;
        }
        else
        {
            a++;
            b=a+1;
        }

    }
     mi= mid(a,b);
    while(count<max_count)
    {


    if(fx(mi)<0){
        a= mi;
    }
    else{
        b= mi;
    }

    count++;
    printf("count=%d",count);
 mi= mid(a,b);
    }
    printf("%f",mi);
getch();
}


float fx(float x){
    float c;
    c=(x*x*x)-(4*x)-9;
   // printf("cnscl");
    return c;
}
float mid(float a,float b)
{
  float z=((a*fx(b)-b*fx(a))/(fx(b)-fx(a)));
  printf("z=%f \n",z);
  return z;
}

