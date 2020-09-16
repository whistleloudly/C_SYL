#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    int sum = 0;
    if(argc < 2){
        printf("Enter at least 2 numbers");
    }
    else{
        for(int i=0;i<argc;i++){
            sum = sum + atoi(argv[i]);
        }
    }
    printf("sum = %d\n",sum);
}