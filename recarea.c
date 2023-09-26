#include<stdio.h>
void main()
{
    double w,h ;
    scanf("%lf %lf",&w,&h);
     if(w<=0 && h<=0){
        printf("invalid width and height");
    }
    else if(w<=0){
        printf("invalid width");
    }
    else if(h<=0){
        printf("invalid height");
    }
    else{
        double area=w*h;
         printf("%.2f",area);
    }

   

}