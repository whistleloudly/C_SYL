#include<stdio.h>

int main(){
    int a = 100,b =10;
    int *point_1,*point_2;

    point_1 = &a;
    point_2 = &b;

    printf("a = %d, b = %d\n",a,b);
    printf("%p,%p\n",point_1,point_2);
    printf("*point_1 = %d,*point_2 = %d\n",*point_1,*point_2);
    return 0;
}