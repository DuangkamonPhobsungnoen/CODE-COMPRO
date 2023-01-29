#include <stdio.h>
int main() {
	float number;
	scanf("%f", &number);
	if (80 <= number && number <= 100) {
		printf("A");
	}
    else if (70 <= number && number  < 80) {
		printf("B");
	}
    else if (60 <= number && number < 70) {
		printf("C");
	}
    else if (50 <= number && number < 60) {
		printf("D");
	}
    else if (0 <= number && number < 50) {
		printf("F");
	}
	else {
        printf("Out of Range");
    }
	return 0;
}
