#include <stdio.h>

int main () {
	int a, x;
	scanf("%d", &a);
	x = a % 10 * 1000;
	a = a/10;
	x =  x + a % 10 * 100;
	a = a/10;
	x =  x + a % 10 * 10;
	a = a/10;
	x = x + a;
	printf("%d", x);
	return 0;
}
