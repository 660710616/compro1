#include<stdio.h>
void main(){
    int x,y; //รับค่า 
    int sumX=0,sumY=0,sumXorY=0;//หาผลรวมของจำนวนที่หาร x กับ y ลงตัว
    scanf("%d %d", &x,&y);
    while(1){
        int z;//ค่าตัวเลขที่จะนำมาหาร x กับ y
        scanf("%d",&z);
        if(z<=0)
        {
            break;
        }
        if(z%x==0 && z%y != 0)//zหารxลงตัว
        {
            sumX += z ; 
        }
        if(z%y==0 && z%x != 0)//z mod y 
        {
            sumY += z ;
        }
        if(z%x==0 || z%y == 0) //หารด้วยxหรือyลงตัว
        {
            sumXorY += z ;
        }

    }
    printf("%d\n%d\n%d",sumX,sumY,sumXorY);
}