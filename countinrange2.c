#include<stdio.h>
void main()
{

    int x,y,z;
    int count_btw=0; //นับว่าว่ามีกี่ตัว
    int count_min=0;
    int count_max=0;
    int temp;//ตัวแปรไว้สลับค่า


    scanf("%d%d",&x,&y);

    if(x!=y) //เช็คifก่อนว่าxไม่เท่ากับy
    {
        while(1)
        {
            scanf("%d",&z);//รับค่าz
            if(z==0)//เจอ0ให้เบรค
            {
                break;
            }
           if(z<x && z>y)//zมากกว่า y/zน้อยกว่าx  ให้สลับค่า x=y ก่อน
            {
                temp=y;
                y=x;
                x=temp;
                
            }
            if(z>x && z<y) //z มากกว่า x น้อยกว่า y
            {
                count_btw+=1;
            }
            else if(z<x && z<y)//z น้อยกว่า x น้อยกว่า y
            {
                count_min+=1;
            }
            else if(z>x && z>y)//z มากกว่า x มากกว่า y
            {
                count_max+=1;
            }


        }
    }
    printf("%d\n",count_btw);//ปริ้นผลลัพธ์
    printf("%d\n",count_min);
    printf("%d",count_max);
} 