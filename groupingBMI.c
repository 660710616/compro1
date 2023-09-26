#include<stdio.h>
void main() {
    float N,weight,height;
    float udw=0,normal=0,ow=0,obes=0;
    float weight_udw=0,weight_normal=0,weight_ow=0,weight_obes=0;
    scanf("%f",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%f%f",&weight,&height);
        float BMI=weight/((height/100)*(height/100));
        if (BMI<18.5){
            udw++;
            weight_udw += weight;   
        }else if(BMI<25) {
            normal++;
            weight_normal += weight;
        }else if (BMI<30){
            ow++;
            weight_ow += weight; 
        }else{
            obes++;
            weight_obes += weight;   
        }
    }
    printf("Underweight %.0f %.2f %.2f%%\n",udw,weight_udw/udw,(100/N)*udw);
    printf("Normal weight %.0f %.2f %.2f%%\n",normal,weight_normal/normal,(100/N)*normal);
    printf("Overweight %.0f %.2f %.2f%%\n",ow,weight_ow/ow,(100/N)*ow);
    printf("Obesity %.0f %.2f %.2f%%\n",obes,weight_obes/obes,(100/N)*obes);
}
