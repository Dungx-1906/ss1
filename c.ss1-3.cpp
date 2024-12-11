#include <stdio.h>
int main (){ 
	float r,p = 0,s = 0;
	printf ("nhap ban kinh ");
	scanf ("%f",&r);
	p = r*2 * 3.14;
	s = r*r*3.14;
	printf ("chu vi hinh tron la %.2f \n",p);
	printf ("dien tich tron la %.2f \n",s);
}
