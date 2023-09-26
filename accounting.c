#include<stdio.h> //จะทำงานเรื่อยๆจนกว่าจะเจอ type 0
void main(){
    int type,amount; //typeสำหรับเช็คประเภท amount คือค่าเงินที่ได้รับเข้ามา
    int income_sum=0,expense_sum=0;//ผลรวมของรายได้กับจ่าย
    int income_count=0,expense_count=0;//รอบที่ป้อนรายรับรายจ่าย

    while(1){
        scanf("%d",&type); //เช็คtype ของข้อมูลว่าเป็น 0 1 2 0ให้เบรค 1 รายรับ 2รายจ่าย
        if(type==0){
            break;
        }
        scanf("%d",&amount);
        if(type==1) //ถ้าเช็คแล้วว่าเป็นประเภทที่1 ให้นับรอบcountและเก็บผลในsum
        {
            ++income_count;
            income_sum += amount;
        } 
        else if(type==2) //ถ้าเช็คแล้วว่าเป็นประเภทที่2 ให้นับรอบcountและเก็บผลในsum
        {
            ++expense_count;
            expense_sum += amount;
        }
    }
    printf("%d %d\n",income_count,expense_count); //ปริ้นรอบที่นับได้ทั้งหมด
    printf("%d %d %d",income_sum,expense_sum,income_sum-expense_sum);//แสดงผลรวมของรายรับรายจ่าย

}