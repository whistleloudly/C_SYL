#include<stdio.h>

int main(){
    int max4();
    int max = max4();
    printf("the max number is : %d\n",max);
    return 0;
}

int max4(){
    int max2(int x,int y);
    int a,b,c,d,max;
    printf("please enter 4 number: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x = max2(a,b);
    int y = max2(c,d);
    max = max2(x,y);
    return max;
}

int max2(int x,int y){
    int z;
    z = x>y?x:y;
    return z;
}