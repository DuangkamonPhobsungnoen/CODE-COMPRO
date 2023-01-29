#include <stdio.h>
#include <math.h>
int main() {
	float s, p, n, percent, discount;
	scanf("%f %f %f", &s, &p, &n);
    percent = (s*n)-((s*n*p)/100);
    discount = (s*n)-(floor(n/3)*(s));
	if (percent <= discount )  {
		printf("Discount %.0f%%\n%.2f", p, percent);
	}
	else {
        printf("Buy 2 Get 1 \n%.2f", discount);
    }
	return 0;
}
