#include<stdio.h>

int main(){
    int i,*p,a[10];
    p = a;
    printf("please enter 10 numbers:");
    for(i = 0;i<10;i++){
        scanf("%d",p++);
    }
    p = a;
    for(i=0;i<10;i++,p++)
        printf("%d\t",*p);
    return 0;
}