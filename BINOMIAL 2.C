#include <stdlib.h>
#include <stdio.h>
int  main()
{
   int sum=0,i,n,j,m;
   float x=0,p=0,rnd;
   random();
   system("clear");
   // clrscr();
   printf("Random Sample From Binomial Distribution : \n");
   printf("Enter Sample Size: ");
   scanf("%d",&n);
   printf("Enter total no of Trials :");
   scanf("%d",&m);
   printf("Enter p:");
   scanf("%f",&p);

   for(i=0;i<n;i++)
   {   for(j=1;j<=m;j++){

   rnd=(float)rand()/RAND_MAX;
   if(rnd<p) x=1;
   else x=0;
   sum=sum+x;
      }
   printf("%d\n",sum);
   sum=0;
}

   //getch();
}
