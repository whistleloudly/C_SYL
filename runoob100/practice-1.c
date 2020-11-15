#include<stdio.h>

int main()
{
    int i,j,k,n=0;
    printf("\n");
    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            for(k=1;k<5;k++){
                if(i!=k&&j!=k&&i!=j){
                    printf("%d%d%d\n",i,j,k);
                    n++;
                }
                else
                {
                    continue;
                }
                
            }
        }
    }
    printf("\nall:%d",n);
    return 0;
}