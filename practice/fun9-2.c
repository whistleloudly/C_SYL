#include<stdio.h>

int main(){
    int a,b,c;
    printf("please enter 2 numbers:");
    scanf("%d%d",&a,&b);
    int a_one_place = a%10;
    int a_ten_place = (a - a_one_place)/10;
    int b_one_place = b%10;
    int b_ten_place = (b - b_one_place)/10;
    c = a_one_place*1000+b_ten_place*100+a_ten_place*10+b_one_place;
    printf("c = %d\n",c);
    return 0;

}