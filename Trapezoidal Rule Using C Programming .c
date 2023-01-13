#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float  func(float);
int main(){
    float upper,lower;
    int u;
    float h,x,I=0.00;
    system("clear");
    printf("Enter the Lower Limit :");
    scanf("%f",&lower);
    printf("Enter the upper limit :");
    scanf("%f",&upper);
    printf("Enter the no of Partitions :");
    scanf("%d",&u);
    x=lower;
    h=(upper-lower)/u;
    while(x<=upper-h)
    {
        I=I+func(x)+func(x+h);// For Sympson's 1/3 rd Rule , This will be Changed 
        x=x+h;
    }
    I=(h/2)*I;
    printf("The value of Integration is : %5.2f",I);
    return 0;
}
float func(float x){
    float y;
    y = pow(x,3)+pow(x,2)+3;
    return y;
}