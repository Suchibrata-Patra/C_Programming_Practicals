#include<stdio.h>

#include<stdlib.h>

int fact(int n);

int main(){

    int n;

    printf("Enter the Digit:");

    scanf("%d",&n);

    int x= fact(n);


}

int fact(int n)

{

   int i=1;

   int fact=fact*n;

   

   return fact ;


}
