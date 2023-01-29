#include<stdio.h>

int main(){
    char name[200], surname[200];
    scanf("%s %s", &name, &surname);
    printf("%c.%c.", name[0], surname[0]);
}
