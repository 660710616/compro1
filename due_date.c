#include<stdio.h>
void main(){
    int K, N, order, sum=0, date;//k=จำนวนคนงาน N=จำนวนคำสั่งเสื้อที่สั่งตัด order=จำนวนเสื้อที่สั่งตัด
    scanf("%d%d", &K, &N);
    for(int i=0; i<N; i++){
        scanf("%d", &order);
        sum += order;
        date=(sum+((K*100))-1)/(K*100);//หาจำนวนวันที่จะตัดเสร็จในแต่ละรอบ กำหนดว่าคนงาน1คนทำได้100ตัวต่อวัน
        printf("%d\n", date);
    }
}