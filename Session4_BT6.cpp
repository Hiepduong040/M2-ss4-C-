#include <stdio.h>
int main(){
	int number1,number2,number3;
	printf("Nhap vao 3 so nguyen:");
	scanf("%d%d%d",&number1,&number2,&number3);
	int max = number1, min = number1, soConLai;
	max=(number2>max)  ? number2:max;
	max=(number3>max) ? number3:max;
	min=(number2<min) ? number2:min;
	min=(number3<min) ? number3:min;
	soConLai=number1+number2+number3-max-min;
	printf("Max:%d, SCL:%d, Min:%d",max,soConLai,min);
}
