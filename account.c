#include<stdio.h>
void main(){
    int income; // >0เป็นรายได้ <0เป็นค่าใช้จ่าย
    int in=0,out=0; //เซ็ตค่าให้เป็น 0 ก่อนเริ่ม
    int total_in=0,total_out=0;

    while(1) //จะใช้while หรือ for(;;) อันไหนก็ได้
    {
        scanf("%d",&income);
        if(income==0){
            break;
        }
        else if (income>0){
            in++; //เช็คว่า in เข้ามากี่รอบ **
            total_in+=income; //ผลรวมของรายได้ที่เข้ามา **
        }
        else if (income<0){
            out++;
            total_out+=income;
        }

    }
    printf("%d %d\n",in,out); //ปริ้นว่ามีค่าเข้ามากี่รอบ
    printf("%d\n%d\n",total_in,total_out);//ปริ้นผลรวม

    if(total_in>=total_out*-1) //total_out*-1 ทำให้ไม่ติดลบ**
    {
        printf("debit"); //รายได้มากกว่าจ่าย
    } 
    else if (total_in<total_out*-1){
        printf("credit"); //รายได้น้อยกว่าจ่าย
    }

}