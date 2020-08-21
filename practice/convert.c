#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    int input = 0;
    if(argc != 2)
        return 1;
    input = atoi(argv[1]);
    double output = input*1.8 +32;
    printf("对应的华氏度为：%lf\n",output);
    return 0;
}