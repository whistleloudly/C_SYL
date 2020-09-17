#include<stdio.h>

int main(){
    int n;
    int result;
    int fuc(int x);
    printf("please enter a number: ");
    scanf("%d",&n);
    if(n < 0)
        printf("data error!\n");
    else{
        result = fuc(n);
        printf("the result is %d\n",result);
    }
    return 0 ;
}

int fuc(int x){
    int f;
    if(x==0||x==1)
        f = 1;
    else
        f = x*fuc(x-1);
    return f;
}