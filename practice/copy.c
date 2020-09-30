#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    if(argc!=3){
        printf("the number of argument wrong!\n");
        exit(0);
    }
    char * file1 = argv[1];
    char * file2 = argv[2];
    FILE *from,*to;
    char ch;

    if((from=fopen(file1,"r"))==NULL)
        printf("file is not exist!\n");
    if((to=fopen(file2,"w"))==NULL)
        printf("file can not be created!\n");

    while((ch=fgetc(from))!=EOF)
        fputc(ch,to);
    
    fclose(from);
    fclose(to);
    return 0;
}