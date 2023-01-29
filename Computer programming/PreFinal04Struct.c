#include <stdio.h>
#include <string.h>
 
int main() {
    int input_num, count=0;
    char want[10];
    scanf("%d %s", &input_num, want); //input_num รับตัวแปรกี่ครั้ง want ชื่อหนังสือที่ต้องการค้นหา
 
    struct Book { //มี book ทั้งหมด 3 รอบ รหัสหนังสือ, ชื่อหนังสือ, ผู้เขียน
        char id[10];
        char name[100];
        char author[100];
    } Book[input_num];
    //รับค่า
    for (int i=0; i<input_num; i++) { 
        scanf("%s %s %s", Book[i].id, Book[i].name, Book[i].author);
    }
    //เช็คว่าเหมือนกันมั้ย strcmp(want, Book[i].id == 0)
    for (int i=0; i<input_num; i++) {
        if (strcmp(want, Book[i].id) == 0) {
            printf("%s %s %s", Book[i].id, Book[i].name, Book[i].author);
            count++;
        }
    }
    if (count==0) {
        printf("Not Found");
    }
    return 0;
}
