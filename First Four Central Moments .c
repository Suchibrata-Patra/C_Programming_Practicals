#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    int n,arr[100];
    float mean,sd,sum=0,sum_0=0,sum_1=0,sum_2=0,sum_3=0,sum_4=0,skewness,kurtosis;
    system("clear");
    printf("How many Data Want to Enter :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter Data[%d] :",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    mean=sum/n;
    sum=0;
    for(int i=0;i<n;i++){
    sum_0=sum_0+abs(arr[i]-mean);
    sum_2=sum_2+pow((arr[i]-mean),1);
    sum_2=sum_2+pow((arr[i]-mean),2);
    sum_3=sum_3+pow((arr[i]-mean),3);
    sum_4=sum_4+pow((arr[i]-mean),4);

    }
    skewness=(sum_3/3)/pow((sum_2/n),3/2);
    kurtosis=(sum_4/(sum_2*sum_2))-3;
    printf("Mean Deviation = %f\n",sum_0/n);
    printf("First Order Central Moment =%f\n",sum_1/n);
    printf("Second Order Central Moment =%f\n",sum_2/n);
    printf("Third Order Central Moment =%f\n",sum_3/n);
    printf("Fourth Order Central Moment =%f\n",sum_4/n);
    printf("Skewness= %f\n",skewness);
    printf("Kurtosis=%f\n",kurtosis);
    return 0;

}