#include<stdio.h>

int main(){
    void swap(int * point_1,int * point_2);
    int a,b,*p1,*p2;
    printf("please enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    p1 = &a;
    p2 = &b;
    if(a<b)
        swap(p1,p2);
    printf("a = %d,b = %d\n",a,b);
    printf("max = %d,min =%d\n",a,b);
}

void swap(int *point_1,int *point_2){
    int temp;
    temp = *point_1;
    *point_1 = *point_2;
    *point_2 = temp;
}