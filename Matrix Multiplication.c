#include <stdio.h>

#include<stdlib.h>

#include<string.h>

int main (){


// Initialising 1st Matrix

   system("clear");

    int m1,n1,m2,n2;

    printf("No of Rows of 1st Matrix : ");

    scanf("%d",&m1);

    printf("No of Columns of 1st Matrix : ");

    scanf("%d",&n1);

    

// Initialising the 2nd Matrix

    

    printf("No of Rows of 2nd Matrix : ");

    scanf("%d",&m2);

    printf("No of Columns  of 2nd Matrix : ");

    scanf("%d",&n2);

 

    if (n1!=m2)

    {

        printf("Can't Compute ...\n");

// Checking n1=m2

    

    }

    

    else{

        

        int matrix1[m1][n1];

        int matrix2[m2][n2];

// Taking input of 1st Matrix

        

        printf("\n ");

        printf("Enter the 1st Matrix : \n\n");

        

        for (int i=1;i<=m1;i++)

        {

            for (int j=1;j<=n1;j++)

            {

                printf("\ta[%d][%d] : ",i,j);

                scanf("%d",&matrix1[i][j]);

            }

        }

// Taking input of 2nd Matrix


        printf("\n ");

        printf("Enter the 2nd Matrix : \n\n");

        for (int i=1;i<=m2;i++)

        {

            for (int j=1;j<=n2;j++)

            {

                printf("\tb[%d][%d]",i,j);

                scanf("%d",&matrix2[i][j]);

            }

        }

        printf("\n");

// Printing 1st Matrix


        for (int i=1;i<=m1;i++)

        {

            printf("\t");

            printf("|");

            for (int j=1;j<=n1;j++)

            {

                printf(" %d ",matrix1[i][j]);

                

                

            }

            printf("|");

            printf("\n");

        }

printf("\n\n");

          // Printing 2nd Matrix


            for (int i=1;i<=m2;i++)

            {

                printf("\t");

                printf("|");

                for (int j=1;j<=n2;j++)

                {

                    printf(" %d ",matrix2[i][j]);

                }

                printf("|");

                printf("\n");

            }

            

        

         int x=1,y=1,sum[m1][n2];

            int product[x][y];

                        for (int k=1;k<=m1;k++)

               {

                for (int p=1;p<=n2;p++)

                {

               // product[k][p]=matrix1[k][p]*matrix2[p][k];

                //um=sum+product[k][p];

                //    printf("%d",sum);

                    product[k][p]=matrix1[k][p]*matrix2[p][k];

                    sum[k][p]=sum[k][p]+product[k][p];

                    

                    printf("%d\n",sum[k][p]);

                    

                }

        

            }


            

    } // Closing of else Statement

        

        

}

    

    
