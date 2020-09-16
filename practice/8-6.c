#include<stdio.h>
#include<string.h>

int main(){
    char str1[30] = "People's Republic of";
    char str2[] = "China";
    printf("%s\n",strcat(str1,str2));
    int str1len = strlen(str1);
    printf("length = %d",str1len);
    return 0;
}