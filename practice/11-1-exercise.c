#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char *month[] = {"January","Februray","March","April","May","June","July","August","September","October","November","December"};
    printf("%s\n",*(month+n-1));
    return 0;
}