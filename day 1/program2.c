#include <stdio.h>
int main(){
    int i,N;
    printf("enter a number :");
    scanf("%d",&N);
    
    printf("multiplication table of %d:\n",N);
    for(i =1; i<=10;i++){
        printf("%d*%d =%d\n",N,i,N*i);
    }
    return 0;
}