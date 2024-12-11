// abcd
/*
	a
	abcd
	sum = 0
	abcd % 10 = d
	sum = sum + d
	abcd / 10 = abc
	abc % 10 = c
	sum = sum + c
	abc / 10 = ab
	ab % 10 = b
	sum = sum + b
	ab / 10 = a
	sum = sum + a
	
*/

#include <stdio.h>

int main () {
	int a;
	int sum = 0;
	scanf("%d", &a);
	sum = sum + a % 10;
	a = a/10;
	sum = sum + a % 10;
	a = a/10;
	sum = sum + a % 10;
	a = a/10;
	sum = sum + a;
	printf("%d", sum);
	return 0;
}
