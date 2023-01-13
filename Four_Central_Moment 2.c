#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n,arr[100];
    float mean,sum,deviation;
    system("clear");
    printf("How many Data You want to Enter : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      printf("Enter the Value %d :",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
     mean=sum/n;
     
    // Calculation of Second Order Central Moments 
    for (int i = 0; i < n; i++){
       sum=sum+pow((arr[i] - mean),2);
    }
    printf("First Order Central Moment = %f\n",sum/n);
    
   // Calculation of Third Order Central Moments 
     sum=0; //
    for (int i = 0; i < n; i++){
       sum=sum+pow((arr[i] - mean),3);
    }
    printf("Third Order Central Moment = %f\n",sum/n);

 // Calculation of Fourth Order Central Moments 
     sum=0; //
    for (int i = 0; i < n; i++){
       sum=sum+pow((arr[i] - mean),4);
    }
    printf("Fourth Order Central Moment = %f\n",sum/n);
// Calculation of Fourth Order Central Moments 
     sum=0; //
    for (int i = 0; i < n; i++){
       sum=sum+pow((arr[i] - mean),1);
    }
    printf("First Order Central Moment = %f\n",sum/n);
// Calculation of Fifth Order Central Moment

 return 0;
    
}



