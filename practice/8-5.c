#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "I love you";
    puts(str);
    printf("Please enter a new string");
    gets(str);
    puts(str);
    return 0;
}