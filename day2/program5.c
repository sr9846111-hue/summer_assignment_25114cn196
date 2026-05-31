 //write a program to find sum of digits of a number//
 #include <stdio.h>
 int main(){
    int n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
     
    while(n != 0) {
        sum += n %10;
        n = n/10;
    }
    printf("sum of digits : %d\n",sum);
    return 0;
 }