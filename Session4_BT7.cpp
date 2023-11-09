#include <stdio.h>
int main(){
    float luong, ngayCong;
    printf("Nhap luong co ban:");
    scanf("%f", &luong);
    printf("Nhap so ngay cong:");
    scanf("%f", &ngayCong);
    if (ngayCong>26)
    {
        ngayCong=26+(ngayCong-26)*1,5;
    }
    float tienLuong=luong*(ngayCong/26);
    printf("Luong cua nhan vien thang nay la %.3f",tienLuong);
}
