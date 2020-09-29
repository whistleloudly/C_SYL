#include<stdio.h>

int main(){
    void copy_str(char *from,char *to);
    char str2[] = "I am a student";
    char str1[] = "you are a teacher";
    printf("str1 = %s\tstr2 = %s\n",str1,str2);

    char *a = str1,*b = str2;
    copy_str(a,b);
    printf("str1 = %s\tstr2 = %s\n",str1,str2);
    return 0;
}

void copy_str(char *from,char *to){
    while(*from!='\0'){
        *to = *from;
        to++;
        from++;
    }
    *to = '\0';
}