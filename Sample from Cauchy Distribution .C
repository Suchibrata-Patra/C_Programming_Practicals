#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int n=0,i=0;
 float u,cauchy;
 system("clear");
 printf("Random Samples from Standard Cauchy -> \n ");
 printf("Sample Size  : ");
 scanf("%d",&n);
 random();
 for(i=0;i<n;i++)
    {
       u=rand()/(float)RAND_MAX;
       cauchy=tan(u+0.5);
      printf("%f\n",cauchy);
    }

}// Enf of Main