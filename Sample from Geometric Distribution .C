#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,n,z,s=0;
  float x,y,u,p;
 system("clear");
 printf("Enter the Sample Size: ");
 scanf("%d",&n);
 printf("Enter p: ");
 scanf("%f",&p);
 random();
  for(i=0;i<n;i++){
  s=0;

   do{

      u=rand()/(float)RAND_MAX ;
      if(u>p){
        z=0;
        s++;
      }
      else {
        z=1;
      }
  }while(z==0);//End of While
     printf("%d\n",s);
 }

}
