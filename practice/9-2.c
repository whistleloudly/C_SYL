#include<stdio.h>

int main(){
    int max(int x,int y);
    int a = 1,b = 2;
    int c = max(a,b);
    printf("the max number is : %d\n",c);
    return 0;
}

int max(int x, int y){
    int z;
    z = x>y?x:y;
    return z;
}