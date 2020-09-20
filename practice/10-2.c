#include<stdio.h>

int main(){
    int *p1,*p2,*p3,i,j;
    printf("please enter 2 number:");
    scanf("%d%d",&i,&j);
    p1 = &i;
    p2 = &j;
    
    if(i<j){
        p3 = p1;
        p1 = p2;
        p2 = p3;
    }

    printf("i = %d,j = %d\n",i,j);
    printf("max = %d,min = %d\n",*p1,*p2);
    return 0;
}