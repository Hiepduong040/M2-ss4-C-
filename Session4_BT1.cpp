#include <stdio.h>
int main(){

	int number;
	printf("Nhap vao 1 so nguyen:");
	scanf("%d",&number);
    if(number % 3 == 0 && number % 5 == 0){
	printf("%d chia het cho ca 3 va 5\n", number);
	}else {
		printf("%d khong chia het cho ca 3 va 5\n", number);
	}
}
