#include<stdio.h>
#include<string.h>

void printstar();
void printmessage();

int main(){
    printstar();
    printmessage();
    printstar();
    return 0;
}

void printstar(){
    printf("********************\n");
}

void printmessage(){
    printf("how are you\n");
}