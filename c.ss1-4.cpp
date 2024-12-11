#include <stdio.h>
int main(){
	float dtoan,dvan,danh,dTB,dtong;
	printf("nhap diem toan :");
	scanf("%f",&dtoan);
	printf("nhap diem van :");
	scanf("%f",&dvan);
	printf("nhap diem anh :");
	scanf("%f",&danh);
	dtong= dtoan +dvan +danh;
	dTB= dtong / 3;
	printf("diem tong la : %.2f \n",dtong);
	printf("diem trung binh : %.2f \n",dTB);
	
	return 0;
}
