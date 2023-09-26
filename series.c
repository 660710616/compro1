#include <stdio.h>

 void main() {
    int b;
    scanf("%d", &b);
    int m=1;
    int n=1;
    int sum=m*n;
    while(n!=b){
        n=m+n;
        ++m;
        sum += m*n;
    }
    printf("%d",sum);
 
 }