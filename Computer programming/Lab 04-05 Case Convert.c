#include <stdio.h>
int main() {
	char text;
	scanf("%c", &text);
    if (65 <= text && text <= 90) {
        printf("%c", text+32);
    }
    else if (97 <= text && text <= 122) {
        printf("%c", text-32);
    }
    else {
        printf("error");
    }

}
