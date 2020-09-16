#include<stdio.h>

int main(){
    int LearnTime[10];
    printf("Please enter 10 numbers:");
    int i,j,k;

    for(i=0;i<10;i++){
        scanf("%d",&LearnTime[i]);
    }

    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(LearnTime[j]>LearnTime[j+1]){
                k = LearnTime[j+1];
                LearnTime[j+1] = LearnTime[j];
                LearnTime[j] = k;
            }
            else
                continue;
    }
    }
    printf("the sort numbers:");
    for(i=0;i<10;i++){
        printf("%d\t",LearnTime[i]);
    }
    printf("\n");
    return 0;
}