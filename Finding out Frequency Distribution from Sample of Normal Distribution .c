#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){

   int n,arr[8]={0};
   float random,u,x,y;
   system("clear");
    printf("How many Data Want to generate :");
    scanf("%d",&n);
    time_t t;
    srand(time(&t));
    for(int i=0;i<n;i++){

    x=(float)rand()/RAND_MAX ;
    y=(float)rand()/RAND_MAX ;
    u=(sqrt(-2*log(x)))*(sin(2*3.14*y));
    printf("[%d] Value= %f\n",i+1,y);

 if(u<-3) ++arr[0];
 else if(u>-2.99&&u<-2) ++arr[1];
 else if(u>-1.99&&u<-1) ++arr[2];
 else if (u>-0.99 && u<0 ) ++arr[3];
 else if(u>0.01&&u<1) ++arr[4];
 else if(u>1.01&&u<2) ++arr[5];
 else if(u>2.01&&u<3) ++arr[6];
 else ++arr[7];

 }
 printf("\n\n");
    printf("(-inf,-3)=%d\n",arr[0]);
    printf("(-2.99,-2)=%d\n",arr[1]);
    printf("(-1.99,-1)=%d\n",arr[2]);
    printf("(-0.99,0)=%d\n",arr[3]);
    printf("(0.01,1)=%d\n",arr[4]);
    printf("(1.01,2)=%d\n",arr[5]);
    printf("(2.01,3)=%d\n",arr[6]);
    printf("(3,inf)=%d\n",arr[7]);


}