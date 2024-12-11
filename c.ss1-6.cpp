#include<stdio.h>
int main(){
	int a,h;
	float s;
	printf("nhap chieu cao cua tam giac:");
	scanf("%d",&h);
	printf("nhap canh day cua tam giac:");
	scanf("%d",&a);
	s=a*h/2.0;
	printf("dien tich tam giac : %.1f",s);
	return 0;
}
