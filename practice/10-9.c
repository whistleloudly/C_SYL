#include<stdio.h>

int main(){
    void change(int x[],int n);
    int a[10] = {3,5,8,7,6,99,42,45,4,77};
    int i;
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    printf("\n");
    change(a,10);

    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}

void change(int x[],int n){
    int temp,i,j,m = (n-1)/2;
    for(i=0;i<m;i++){
        temp = x[i];
        j = n-i-1;
        x[i] = x[j];
        x[j] = temp
;    }
}