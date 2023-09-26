#include<stdio.h>
void main(){
    int a,b,c,d;
    int a1,b1,c1,d1;
    int count=0;

        scanf("%d%d%d%d",&a,&b,&c,&d);
        scanf("%d%d%d%d",&a1,&b1,&c1,&d1);
        if(a1>=a){
            printf("1 ");
            count++;
        }
        if(b1>=b){
            printf("2 ");
            count++;
        }if(c1>=c){
            printf("3 ");
            count++;
        }if(d1>=d){
            printf("4");
            count++;
        }
        else if(a1<a&&b1<b&&c1<c&&d1<d){
            printf("0");
        }
        if(count<3){
            printf("\nfail");
        }else{
            printf("\npass");
        }

    }
