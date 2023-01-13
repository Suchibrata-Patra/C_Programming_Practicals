#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum=0,counter=0;
    float p,random;
    printf("No of Trial :");
    scanf("%d",&n);
    printf("Enter p:");
    scanf("%f",&p);
    while(counter<10)
    {

     for(int i=0;i<n;i++)
    {
      random=rand()/(float)RAND_MAX;
      if(random<p) random=1;
      else random=0;
      sum=sum+random;
    }
    printf("%d\n",sum);
    sum=0;
       counter++;
    }
    
}