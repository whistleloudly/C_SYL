#include<stdio.h>

int main(){
    int j = 0,k=0;
    for(int i = 1;i <= 4; i++){
        j = i;
        k = i;
        for(k;k++;k<=4){
            printf(" ");
        }
        for(j;j--;j>=1){
            printf("*");
        }
    }

    return 0;
}