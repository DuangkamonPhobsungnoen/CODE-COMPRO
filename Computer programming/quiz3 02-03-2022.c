#include<stdio.h>
int main(){
        int a=1;  
        int num[100],i=0,count=0,j=0;
        while(a=1){	// ให้วน loop ไปเรื่อย ถ้า a=1 อันนี้เป็น infinity loop 
                scanf("%d",&num[i]);	// รับค่าตัวเลขเก็บใน Array
                if(num[i]==0){	// ถ้า Array ในตำแหน่งล่าสุด มีค่าเท่ากับ 0
                        break;	// สั่งให้หยุดการทำงานของ loop นี้
                }
                i++; count++;	// บวกค่าของ i และ count เพิ่มครั้งละ 1 ของแต่ละรอบ
        }
	// ส่วนของการแสดงผลใน Array 
        for(j=0;j<count;j++){	// วน loop for ตั้งแต่ j มีค่าเท่ากับ 0 จนถึง j มีค่าเท่ากับ count
                if((num[j]==1 || num[j]%2 == 0 || num[j]%3 == 0 || num[j]%5==0 || num[j]%7==0) 
                && (num[j]!=2 && num[j]!=3 && num[j]!=5 && num[j]!=7))
                {
                    num[j] = 0;
                }
                else {
                    printf("value %d\n",num[j]);
                }
        }
}
