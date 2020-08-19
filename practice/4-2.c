#include<stdio.h>

int main(){
    float r,d;
    float c,a;
    float pi = 3.1415926;

    printf("请输入圆的直径：");
    scanf("%f",&d);
    r = d / 2.0;
    c = 2*pi*r;
    a = pi*r*r;
    printf("圆的周长为：%f\n",c);
    printf("圆的面积为：%f\n",a);
    return 0;
}