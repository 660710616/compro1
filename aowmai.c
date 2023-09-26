#include<stdio.h>
void main (){
    int qmax,midmax,finalmax,countmax,count;
    double q,mid,final,countn;
    scanf("%d %d %d %d",&qmax,&midmax,&finalmax,&countmax);
    scanf("%lf %lf %lf %d",&q,&mid,&final,&count);
    q=(q/qmax)*10;
    mid=(mid/midmax)*35;
    final=(final/finalmax)*50;
    countn=((double)count/countmax)*5;
    if(q<=qmax){
            qmax=q ;
    }
    if(mid<=midmax){
           
            midmax=mid;
        }
       
        if(final<=finalmax){
            
            finalmax=final;
        }
        if(count<=countmax){
            
            countmax=countn;

        }

    double sum=q+mid+final+countn;
    if(sum>=80){
            printf("%.2f E",sum);
        }
        else if(sum<80 && sum>=40){
            printf("%.2f P",sum);
        }
        else if(sum<40){
            printf("%.2f F",sum);
        }
}