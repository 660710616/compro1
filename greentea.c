#include<stdio.h>
void main(){
    int N=7;
    for (int i=0;i<N;i++){
    int water,sugar;
    scanf("%d %d",&water,&sugar);
    int bottle_water = water/250;
    int bottle_sugar = sugar/15;
    int bottle;
    if(bottle_water>bottle_sugar){
        bottle=bottle_sugar;
    }
    else{
        bottle=bottle_water;
    }
    if(water-(bottle*250)>0){
        printf("%d water\n",bottle);
    }else {
        printf("%d",bottle);
    }

    }
}