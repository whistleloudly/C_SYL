#include<stdio.h>

int main(){
    char str[] = "hello world";
    char *p1,*p2,b[20];
    p1 = b;
    p2 = str;
    int i;
    for(i=0;*p2!='\0';p1++,p2++,i++){
        *p1 = *p2;
    }
    *(b+i) = '\0';
    printf("%s\n",b);
    return 0;
}