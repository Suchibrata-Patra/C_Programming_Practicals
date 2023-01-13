#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 int i,n;
 float x,y,u;
 system("clear");

 printf("Enter Number of Samples : ");
 scanf("%d",&n);
 //randomize();

  for(i=0;i<n;i++)
  {
     x=rand()/(float)RAND_MAX;
     y=rand()/(float)RAND_MAX;
     u=sin(2*3.147*x)*sqrt(-2*log(y));
     printf("%f\n",u);
  }
}