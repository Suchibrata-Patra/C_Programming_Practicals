#include<stdio.h>

#include<stdlib.h>


int main()

{

   system("clear");

   int n, i;

   printf("Enter how many digits you want to print :");

   scanf("%d", & n);

   int array[100];

   array[0] = 0, array[1] = 1;

   for (i = 0; i <= n - 2; i++) {

      array[i + 2] = array[i] + array[i + 1];

   }

   printf("{ ");

   for (i = 0; i < n; i++) {

      printf("%d\t", array[i]);

   }

   printf(" } \n");

}
