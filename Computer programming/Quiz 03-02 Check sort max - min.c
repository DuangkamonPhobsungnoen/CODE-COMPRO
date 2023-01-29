#include <stdio.h>
int main() {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if (a >= b && a >= c) {
		if (b > c) {
			printf("1");
		}
	}
	else {
		printf("0");
	}
	return 0;
}
