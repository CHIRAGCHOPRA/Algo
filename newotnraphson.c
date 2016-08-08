#include<stdio.h>
#include<math.h>
float f(float x){
    float y=(x*x*x)-(4*x)-9;
    return y;
    }

float d(float x){
    float z=3*x*x-4;
    return z;
    }

void main(){
    float error=0.009,x,x1;
    float a=0,b=1;
    int count=0,max_count=4,z=1;
     while(z)
    {
        if(f(a)<0 && f(b)>0)
        {
            z=0;
        }
        else
        {
            a++;
            b=a+1;
        }
}
    printf("%f%f",a,b);
    x=(a+b)/2;
    printf("%f",x);
    while(count<max_count)
    {
        x1=x-(f(x)/d(x));
        if(fabs(x-x1)>error)
            x=x1;
        else
            break;
        count++;
    }
printf("root = %f",x1);
getch();

}
