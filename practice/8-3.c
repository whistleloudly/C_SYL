#include<stdio.h>

int main(){
    int a[3][4] = {{1,2,3},{4,5,6},{7,8,9}};
    int row,colum = 0;
    int i,j=0;
    int max = a[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(a[i][j]>max){
                max = a[i][j];
                row = i;
                colum = j;
            }
        }
    }

    printf("The max number is: %d ,row = %d ,colum = %d ",max,row,colum);
    return 0;

}
