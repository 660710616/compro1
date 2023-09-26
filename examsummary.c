#include<stdio.h>
void main(){
    int a,b,c,d;
    int a1,b1,c1,d1;
    int count,N;
    int c_pass=0,c_a1=0,c_a2=0,c_a3=0,c_a4=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    scanf("%d",&N);
    if(N<=100000){
       
        for(int i=1;i<=N;i++){
            count=0;
             scanf("%d%d%d%d",&a1,&b1,&c1,&d1);
             if(a1>=a){
                count++;
                c_a1++;
            }
            if(b1>=b){
            
                count++;
                c_a2++;
            }if(c1>=c){
            
                count++;
                c_a3++;
            }if(d1>=d){
            
                count++;
                c_a4++;
            }
            if(count<3){
            printf("fail\n");
            }else{
            printf("pass\n");
                c_pass++;
            }

        }
    }
    printf("%d\n",c_pass);
    printf("%d %d %d %d",c_a1,c_a2,c_a3,c_a4);
}