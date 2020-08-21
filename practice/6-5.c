#include<stdio.h>

int main()
{
    char grade;
    scanf("%c", &grade);//gcc不支持scanf_s，但vs支持
    printf("your score:");
    switch (grade)
    {
    case('a'):
        printf("85-100\n");
        break;
    case('b'):
        printf("70-84\n");
        break;
    case('c'):
        printf("60-69\n");
        break;
    case('d'):
        printf("<60\n");
    default:
        printf("error\n");
    }
    return 0;
}