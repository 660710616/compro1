#include<stdio.h>
void main(){
    double h,w;
    scanf("%lf %lf ",&w,&h);
   double bmi;
    bmi= (w /(h/100)*(h/100));
    
    if(h>0 && w>0)
    {
        printf("%.2f",bmi);
        
    }else {
        printf("invalid");
    }
    
}