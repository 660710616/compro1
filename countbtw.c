#include<stdio.h>
void main(){
    int x, y, count=0; //รับค่าxกับy(ช่วงระหว่าง x-y)countคือผลรวมค่าที่รับเข้ามา
    scanf("%d%d", &x, &y);
    if (x>y) //ถ้าxมากกว่า  y ให้สลับค่า x กับ y ก่อน
    {
        int t = x;
        x=y;
        y=t;
    }
    while(1)
    {
        int n; //รับตัวเลขเข้ามา
        scanf("%d", &n);
        if (n<0) //ถ้าเป็น0หรือติดลบจะเบรค
        {
            break;
        }
        if (n>=x && n<=y) //nมีค่ามากกว่าxแต่น้อยกว่าyให้เก็บค่า
        {
            count++;
        }
    }
    printf("%d", count);//ปริ้นผลรวมออกมา
}