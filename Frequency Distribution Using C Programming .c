    #include <stdio.h>   
    #include<stdlib.h> 
    #include<time.h>
         
    int main()    
    {   
         clock_t start, end;
        start=clock();
        /* //Initialize array     
        int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};     
            
        //Calculate length of array arr    
        int length = sizeof(arr)/sizeof(arr[0]);
        */
       int length=100,sum=0,x,arr[100];
       float rnd; 
       for(int i=0;i<100;i++)
       {   
            for(int j=1;j<=10;j++)
            {
               rnd=(float)rand()/RAND_MAX;
                if(rnd<0.5) x=1;
                else x=0;
                sum=sum+x;
            }
         arr[i]=sum;
        sum=0;
  } 
  for(int i=0;i<100;i++){
    for(int j=i+1;j<100;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
  }
            
        //Array fr will store frequencies of element    
        int fr[length];    
        int visited = -1;    
            
        for(int i = 0; i < length; i++){    
            int count = 1;    
            for(int j = i+1; j < length; j++){    
                if(arr[i] == arr[j]){    
                    count++;    
                    //To avoid counting same element again    
                    fr[j] = visited;    
                }    
            }    
            if(fr[i] != visited)    
                fr[i] = count;    
        }    
            
        //Displays the frequency of each element present in array    
        printf("---------------------\n");    
        printf(" Element | Frequency\n");    
        printf("---------------------\n");    
        for(int i = 0; i < length; i++){    
            if(fr[i] != visited){    
                printf("    %d ", arr[i]);    
                printf("     |  ");    
                printf("  %d\n ", fr[i]);    
            }    
        }    
        printf("---------------------\n"); 
        end = clock();
        double duration = ((double)end - start)/CLOCKS_PER_SEC;
        printf("Time taken to execute in seconds : %f", duration);
   
        return 0;    
    }    