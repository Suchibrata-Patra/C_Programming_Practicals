#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
   
   int i=0,j=0,x=0,flag=0;
   bool arr[20];
   time_t t;
   system("clear");
   srand(time(&t));
   printf("SRSWR ---> \n\n");
  for(i=0;i<20;i++){
  x=rand()%71+401;
    if(!arr[x]){
    printf("%d\n",x);
    }
    else i--;
    arr[x]=1;
    }

 }