#include<stdio.h>

int main(){
    int max(int x,int y);
    int a[10];
    printf("please enter 10 numbers:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int m=a[0],n;

    for(int j=0;j<10;j++){
        if(max(m,a[j])>m){
            m = a[j];
            n = j;
        }
        else
            continue;
    }

    printf("the max number is %d ,and it's position is %d.\n",m,n);
    return 0;
}

int max(int x,int y){
    return x>y?x:y;
}