#include<stdio.h>
int multi(int i,int j){
    if (j==1){
        printf("%d*%d=%d",i ,j ,i * j);
        return 0;
    }
    else{ 
        multi(i, j-1);
        printf(" %d*%d=%d",i , j ,i * j);
    }
}
int main(){
        multi(1,9);
        printf("\n");
        multi(2,9);
        printf("\n");
        multi(3,9);
        printf("\n");
        multi(4,9);
        printf("\n");
        multi(5,9);
        printf("\n");
        multi(6,9);
        printf("\n");
        multi(7,9);
        printf("\n");
        multi(8,9);
        printf("\n");
        multi(9,9);
        printf("\n");
        return 0;
    }
