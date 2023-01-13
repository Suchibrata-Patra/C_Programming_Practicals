#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float  func(float);

int main()
{
    float upper,lower,h,x,I=0.00;
    int u;
    system("clear");
    printf("Enter the Lower Limit :");
    scanf("%f",&lower);
    printf("Enter the upper limit :");
    scanf("%f",&upper);
    printf("Enter the no of Partitions :");
    scanf("%d",&u);
    x=lower;
    h=(upper-lower)/u;
    while(x<=upper-(2*h))
    {
        I=I+(func(x)+4*func(x+h)+func(x+(2*h)));//
        x=x+(2*h);
    }
    I=(h/3)*I;
    printf("The value of Integration is : %5.2f\n",I);
    return 0;
}

float func(float x){   
    float y;
    y = x+2;
    return y;
}