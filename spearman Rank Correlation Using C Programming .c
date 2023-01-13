#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int judge_1[10],judge_2[10],judge_3[10],difference,sum=0,rank_1_and_2,rank_2_and_3,rank_1_and_3;
    system("clear");
    printf("Enter Ranks by Judge One \n :");
    for(int i=0;i<8;i++){
        scanf("%d",&judge_1[i]);
    }
    printf("Enter Ranks by Judge Two \n :");
    for(int i=0;i<8;i++){
        scanf("%d",&judge_2[i]);
    }
    printf("Enter Ranks by Judge Three \n :");
    for(int i=0;i<8;i++){
        scanf("%d",&judge_3[i]);
    }
 for(int i=0;i<8;i++){
    difference=judge_1[i]-judge_2[i];
    sum=sum+pow(difference,2);
    rank_1_and_2= 1- ((6*sum)/(8*63));
 }
 sum=0;
 for(int i=0;i<8;i++){
    difference=judge_2[i]-judge_3[i];
    sum=sum+pow(difference,2);
    rank_2_and_3= 1- ((6*sum)/(8*63));
 }
 sum=0;
 for(int i=0;i<8;i++){
    difference=judge_1[i]-judge_3[i];
    sum=sum+pow(difference,2);
    rank_1_and_3= 1- ((6*sum)/(8*63));
 }

 if((rank_1_and_2>rank_1_and_3)&&(rank_1_and_2>rank_2_and_3)){
    printf("Judge One and two have nearest Approach\n");
 }
 else if((rank_1_and_3>rank_1_and_2)&&(rank_1_and_3>rank_2_and_3)){
    printf("Judge One and Three have nearest Approach\n");
 }
 else if((rank_2_and_3>rank_1_and_2)&&(rank_2_and_3>rank_1_and_3)){
    printf("Judge two and three have the nearest Approach\n");
 }
 else {
    printf("All the Judges have same approach\n");
 }


}
