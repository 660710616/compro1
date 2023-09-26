#include<stdio.h>
void main(){
    int n, x, y, z; //รับ x y z กับรับ รอบมา n รอบ
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        if (x==y && y==z) //กรณีคะแนนเท่ากันหมด
        {
            printf("xyz");
        } else if (x==y) 
        {
            printf("xy");//x กับ y เท่ากัน
        } else if (x==z) 
        {
            printf("xz");//x กับ z เท่ากัน
        } else if (y==z) //y กับ z เท่ากัน
        {
            printf("yz");
        } else if (x>y && x>z) //x มากสุด
        {
            printf("x");
        } else if (y>x && y>z) //yมากสุุด
        {
            printf("y");
        } else { /// else if (z>x && z>y) //zมากสุด
            printf("z");
        }
        printf("\n");//ขึ้นบรรทัดใหม่
    }
}