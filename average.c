#include<stdio.h>
void main(){
    int N,x; //Nคือจำนวนชุดเลขที่รับเข้ามาว่ามีกี่ตัว xคือ ตัวเลขที่รับเข้ามา
    float count=0,average; //countคือผลรวมของจำนวนที่รับเข้ามา
    int m=0;//จำนวนตัวเลขที่ปอนเข้ามา

    scanf("%d",&N);
    for(int i=1; i<=N;i++) //สร้าง loop
    {
        scanf("%d",&x);
        if(x<=0)//เช็คเงื่อนไขกรณีเป็น0กับติดลบ
        {
            printf("Not positive\n");
            break;
        }
        else{
            count+=x;
            m++;
        }
    }
    average=count/m; //หาค่าเฉลี่ย
    printf("%.4f",average);//แสดงผลเป็นทศนิยม4ตำแหน่ง
} //ถ้าเจอ0กับติดลบโปรแกรมจะหยุดและแสดงผลเลยถึงจะรับข้อมูลไม่ครบ