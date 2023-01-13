#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,arr[50],i,j,temp;
    system("clear");
   
    printf("How many Data Want to Enter :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter a[%d] :",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j])
           {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }
    }
   printf("After Sorting : \n ");
   for(i =0;i<n;i++){
    printf(" %d ",arr[i]);
   }

}