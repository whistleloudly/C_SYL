#include<stdio.h>

int main(){
    void copy_str(char from[],char to[]);
    char str1[] = "you are a teacher";
    char str2[] = "I am a student";

    printf("%s\n%s\n",str1,str2);
    copy_str(str1,str2);
    printf("%s\n%s\n",str2,str1);
    return 0;
}

void copy_str(char from[],char to[]){
    int i=0;
    while(from[i]!='\0'){
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}