#include<stdio.h>
int main(){
    (int)sizeof(int);//强制类型转换
    (int)sizeof(short);
    (int)sizeof(long);
    printf("%d\n",(int)sizeof(int));//整型字节数
    printf("%d\n",(int)sizeof(short));
    printf("%d\n",(int)sizeof(long));
    return 0;
}