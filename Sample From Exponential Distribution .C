#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ int n,i=0;
 float u,e,lamda;
 system("clear");
 printf("Enter the Sample Size: ");
 scanf("%d",&n);
 printf("Enter Lambda: ");
 scanf("%f",&lamda);
 random();

 for(i=0;i<n;i++)
    {
	 u=rand()/(float)RAND_MAX;
	 e=(-1/lamda)*log(1-u) ;
	 printf("%f\n",e);
    }// End of For Loop

}// End of main