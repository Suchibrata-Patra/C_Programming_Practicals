#include <stdio.h>
#include<stdlib.h>

float median(int a[], int , int);
int main() { 
int a[2500], n, i, t, j;
float Q1, Q2, Q3;
printf("Enter how many data you want to input: ");   
scanf("%d",&n);   
printf("Enter %d Data:\n", n);
 
 for(i=0; i<n;  i++)
 scanf("%d",& a[i]);
  for(i=0; i<n; i++) 
    for(j=0; j<n; j++)     
         if(a[i]<a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t; 

     }      
       Q1 = median(a, 0, n/2-1);   
       Q2 = median(a, 0, n-1);   

 if(n%2==0)    
    Q3 = median(a, n/2, n-1);
 
 else
   Q3 = median(a, n/2+1, n-1);
printf("Lower quartile or Q1 is: %f \n",Q1);
printf("Median or Q2 is: %f \n", Q2);
printf("Upper quartile or Q3 is:\t %.1f \n",Q3); 
printf("Inter quartile range is: %d", (Q3)-(Q1) );

       return 0;

    } // End of Main Function 

float median(int a[], int start, int end){
      float med;
      int len=end-start+1;
      if(len%2==0){
          med = ( (a[start + len/2 -1] + a[start+len/2] ) / 2.0);   

          } 

          else {   
        med = ( a[start+len/2]/ 1.0);   
    }

          return med;

    }