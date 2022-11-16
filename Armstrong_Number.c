#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
system("clear");
int x,y,sum=0,n;
printf("Enter The no : ");
scanf("%d",&x);
n=x;
while(x>0)
{
y=x%10;
sum=sum+pow(y,3);
x=x/10;
}

if(n==sum){
     printf("Armstrong Number.\n");}
else
    printf("Not Armstrong No \n");
}
