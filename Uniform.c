#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n,i=0;
    float random,lower,upper;
    system("clear");
    printf("How Many Data Wanna to Generate ? ");
    scanf("%d",&n);
    printf("Enter Lower Limit :");
    scanf("%f",&lower);
    printf("Enter Upper Limit :");
    scanf("%f",&upper);

    time_t t;

    srand(time(&t));
    for(i=0;i<n;i++){
     random=rand()/(float)RAND_MAX;
     random=(random*(upper-lower))+lower;
     printf("[%d] Data = %f\n",i+1,random);
    }

}