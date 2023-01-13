#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float fact(int);
float exponential(int x ,float i);

int main(){
    int x=1,i=0;
    float  epsilon,limit;
    system("clear");
    printf("Enter x :");
    scanf("%d",&x);
    printf("Enter the Value of Epsilon :");
    scanf("%f",&epsilon);

    while(exponential(x,i)>=epsilon){
        limit=limit+exponential(x,i);
        i++;
    }
    printf("Value of the Exponential Expansion = %f\n",limit);
    return 0;
}

float exponential(int x, float i){
  float value=0;
  value = pow(x,i)/fact(i);
  return value ;
}
float fact(int n ){
    float factorial=1.000;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial ;
}