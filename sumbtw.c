#include<stdio.h>
void main(){
    int x,y,z;
    int temp,total=0;
    scanf("%d%d",&x,&y);

    while(1){
        scanf("%d",&z);
        if(z<=0){
            break;
        }
        if(x>y)//xมีค่ามากกว่าyให้สลับค่ากันก่อน
        {
            temp = y;
            y=x;
            x=temp;
        }
        if(z>=x && z<=y){
            total += z; //หาผลลัพธ์ของตัวเลขที่อยู่ในช่วงx-y
        }
    }
    printf("%d",total);
}