#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int num_1,num_2,sum=0;
    printf("Enter Number One :");
    scanf("%d",&num_1);
    printf("Enter Number Two :");
    scanf("%d",&num_2);


    for(int i=1;i<num_1;i++)
    {
        if(num_1 % i == 0)
        {
            sum=sum+i;
        }
    }
    if(sum==num_2)
      printf("Amicable Number\n");
    else
    printf("Not Amicable Number\n ");
 
}