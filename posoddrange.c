#include<stdio.h>
#include<limits.h>
void main(){
    int odd_max=INT_MIN; //เซ็ทค่าต่ำสุดสูงสุด
    int odd_min=INT_MAX;
    while(1){
        int x;
        scanf("%d", &x);
        if(x<=0){
            break;
        }
        if(x%2!=0 && x>0)//โจทย์หาจำนวนคี่ที่มากสุดกับต่ำสุด
        {
            if(x>odd_max){
                odd_max=x;
            }
            if(x<odd_min){
                odd_min=x;
            }
        }
    }
    printf("%d\n%d\n%d",odd_max,odd_min,odd_max-odd_min);
}