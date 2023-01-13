#include <stdlib.h>
#include <stdio.h>
int  main()
{
   int i,n;
   float x=0,p=0,a=0,b=0;
   random();
   // clrscr();
   system("clear");
   printf("Random Sample From Uniform Distribution : \n");
   printf("Enter n: ");
   scanf("%d",&n);
   printf("Enter p:");
   scanf("%f",&p);
 
   for(i=0;i<n;i++)
   {
     x=(float)rand()/RAND_MAX;
     if(x<p){
     printf("%d\n",0);
      }
      else{
       printf("%d\n",1);
      }


   }

   //getch();
}
