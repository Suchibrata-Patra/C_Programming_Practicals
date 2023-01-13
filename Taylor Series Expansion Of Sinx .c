#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long int factorial(int);
float sinx(float ,int);

int main()
{
    int i=1,j=0;
    float degree,radian,sum=0,epsilon;

    printf("Enter the Value of x in Degree :");
    scanf("%f",&degree);

    printf("Enter the Value of Epsilon : ");
    scanf("%f",&epsilon);

    radian= (3.14*degree)/180 ;
   
    while (sinx(radian,i)<=epsilon)
    {
     sum=sum+(pow(-1,j)*sinx(radian,i));   
     j++; 
    }
    
  printf("Value of the function by Taylor Series Expasion =%f\n",sum);

}
 long int factorial(int x)
{
    long int i=1,fact=1;
    for(i=1;i<x;i++){
    fact=fact*i;
    }
    printf("Value of factorial x = %d\n",factorial);
    return fact;
}

float sinx(float x, int n)
{
    float y= pow(x,(2*n-1))/factorial(2*n-1);
    printf("Value of Sin x = %f\n",y);
    return y;
}