#include<stdio.h>

int main(){
    int m;
    printf("please enter a number: ");
    scanf("%d",&m);
    if(m<7){
        for(int i = 1;i<7;i++)
            printf("%d ",i);
    }
    else
    {
        for(int j = 1;j<=m;j++){
            if(j%7==0||j%11==0)
                printf("%d ",j);
        }
    }
    return 0;
}