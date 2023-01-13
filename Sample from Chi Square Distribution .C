#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
 int m,n,i=0,j=0;
 float u,chi,x,y;
  clrscr();
  printf("Enter Degree of Freedom :");
  scanf("%d",&m);
  printf("Enter the Sample Size :");
  scanf("%d",&n);
  randomize();

for(j=0;j<n;j++)
   {

      for(i=0;i<m;i++)
       {
	 x=rand()/(float)RAND_MAX;
	 y=rand()/(float)RAND_MAX;
	 u=sin(2*3.147*x)*sqrt(-2*log(y));
	 chi=chi+(u*u);
       }// End of First For Loop
    printf("%f\n",chi);
    chi=0;
  }// End of Second For Loop

getch();

}// End of Main