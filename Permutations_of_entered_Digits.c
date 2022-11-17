// C program to print all permutations with duplicates allowed
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(int *a, int l, int r)
{
int i;
static int counter;

if (l == r){
    printf("[%d] : ",(counter+1));
    for(int k=0;k<=r;k++){
         printf("%d ",*(a+k));
    }
    printf("\n");
   counter++;

}

else
{
	for (i = l; i <= r; i++)
	{
		swap((a+l), (a+i));
		permute(a, l+1, r);
		swap((a+l), (a+i)); //backtrack
	}
}
}
int main()
{
	int arr[20],*ptr,n;
    //static int counter=1;
    system("clear");
    printf("How many Digits ?");
    scanf("%d",&n);
    for(int i=0;i<n;i++){

   printf("Enter Digits [%d]:",i+1);
   scanf("%d",&arr[i]);
    }
    
    
    ptr=arr;
	permute(ptr,0,n-1);
	return 0;
}
