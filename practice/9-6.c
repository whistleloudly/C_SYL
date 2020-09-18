#include<stdio.h>

int main(){
    float average(float array[10]);
    float score[10];
    float aver_score;
    printf("please enter 10 number: ");
    for(int i=0;i<10;i++){
        scanf("%f",&score[i]);
    }
    aver_score = average(score);
    printf("the average socre is: %5.2f\n",aver_score);
    return 0;
}

float average(float array[10]){
    int sum=0,aver;
    for(int i=0;i<10;i++){
        sum += array[i];
    }
    aver = sum/10;
    return aver;
}