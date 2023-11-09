#include <stdio.h>
int main(){
	int soDienCu;
	printf("Nhap so dien cu: \n");
	scanf("%d", &soDienCu);
    int soDienMoi;
    printf("Nhap so dien moi: ");
    scanf("%d", &soDienMoi);
    int tienDien;
    int soDienTieuThu=soDienMoi-soDienCu;
    if(0<=soDienTieuThu<50){
    	tienDien=soDienTieuThu*10000;
	}else if(50<=soDienTieuThu<100){
		tienDien=soDienTieuThu*15000;
	}else if(100<=soDienTieuThu<150){
		tienDien=soDienTieuThu*20000;
	}else if(150<=soDienTieuThu<200){
		tienDien=soDienTieuThu*25000;
	}else if(200<=soDienTieuThu){
		tienDien=soDienTieuThu*30000;
	}
	printf("Tien dien thang nay la:%d",tienDien);
}
		

