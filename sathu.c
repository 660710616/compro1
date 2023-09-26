#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int c=0;
    while (n/10>0)//หาเลข9ในแต่ละหลักไปเรื่อยๆ
    {
        int x = n%10;//modแล้วเป็น9
        if(x==9){
            printf("SATHU ");
            c++;
        }
        n = n/10; //ใช้การหาร10ไปเรื่อยจนกว่าจะครบทุกหลัก
    }
    
    if(n==9)//สำหรับเช็คว่ามี9กี่ตัว
    {
        printf("SATHU ");
        c++;
    }
    if(c==0)//ไม่เจอ 9 เลย
    {
        printf("Hope to find SATHU next time");
    }
    if(c==9)//เจอ 9 ตัว
    {
        printf("\nOHH! Serious SATHU");
    }
}