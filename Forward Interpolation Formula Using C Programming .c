#include<stdio.h>
#include<stdlib.h>
int combination(int ,int);
int fact(int);
float u_value_calculator(int ,int);
int main(){
   int sum,n,i,j,counter=0;
   float x[100],y[100],value,h,u,target,Value_of_y=0;
   system("clear");
   printf("Enter the No of Argument :");
   scanf("%d",&n);
   printf("Enter the Values - - - \n");
   for(i=0;i<n;i++){
     printf("x[%d] :",i);
     scanf("%f",&x[i]);
     printf("y[%d] :",i);
     scanf("%f",&y[i]);
   } 
   printf("Value of X for which y to be interpolated :");
   scanf("%f",&target);
   printf("Enter the Value of h: ");
   scanf("%f",&h);
   u=(target-x[0])/h;

   for(i=0;i<n;i++)
   {
    for(j=i;j>=0;j--)
     {
     Value_of_y=Value_of_y+(((-1)^j)*y[j]*combination(n,j));
     }
    value=u_value_calculator(u,i)+Value_of_y;
    Value_of_y=0;
   }
  printf("Interpolated Value =%f\n",value);
 }// End of Main Function
int combination(int n , int r){
  int comb ;
  comb=fact(n)/(fact(r)*fact(n-r));
  return comb ;
}

int fact(int n){
   int factorial=1,i=1;
   while(i<=n){
      factorial=factorial*i;
      i++;
   }
   return factorial;
}

float u_value_calculator(int u,int n){
   float value=1;
 for(int i=0;i<n;i++){
   value=(value*(u-i))/fact(n);
 }
 return value ;
}














