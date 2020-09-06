#include<stdio.h>
 int main(){
     int i,j = 0;
     for(i=1;i<=4;i++){
         for(j=1;j<=5;j++){
             int k = j*i;
             printf("%d\t",k);
         }
         printf("\n");
     }
     return 0;
 }