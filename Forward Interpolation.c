#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n,i,r,j;
    float c;
    system("clear");
    printf("Enter number of rows in the table: ");
    scanf("%d",&n);
    float x[n],y[n];
    printf("Enter the values of x and y in the table:\n");
    for(i=0;i<n;i++)
    {
        printf("x[%d]:",i+1);
        scanf("%f",&x[i]);
        printf("y[%d]:",i+1);
        scanf("%f",&y[i]);
    }
    do
    {
    printf("Enter value of x at which u want to find y: ");
    scanf("%f",&c);
    float h=x[1]-x[0];
    float u=(c-x[0])/h;
    int t=n-1;
    float k[t];
    
    int s[n-1];
    s[0]=k[0];
    
    float p_value[n-1];
    p_value[0]=u;
    for(i=1;i<n-1;i++)
    {
        p_value[i]=p_value[i-1]*(u-i);
    }
    float ans=y[0];
    for(i=0;i<n-1;i++)
    {
        ans+=(p_value[i]*s[i])/fact(i+1);
    }
    printf("Value of INterpolation = %f\n",ans);
    printf("To continue press 0 and press 1 to exit: ");
    scanf("%d",&r);
    }
    while(r!=1);
}