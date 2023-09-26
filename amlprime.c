#include<stdio.h>
void main(){
    int x;  
    scanf("%d", &x);

    if (x%2 == 0){
        if (x==2)//2เป็นจำนวนเฉพาะตัวเดียวที่เป็นเลขคู่
        {
            printf("2 is prime");
        } else {
            printf("%d is not prime", x);
        }
    } else {
        int isPrime = 1; // 1=yes 0=no เก็บสถานะ 
        for (int i=3; i<=x-2; i+=2) //เพิ่มทีละ2เป็นเลขคี่ เริ่มที่3 i<=x-2 คือ loopจนกว่าx-2(ตัวมันเอง)
        {
            if (x%i == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime==1)//เช็คisprime   อีกรอบ
        {
            printf("%d is prime", x);
        } else {
            printf("%d is not prime", x);
        }
    }
}