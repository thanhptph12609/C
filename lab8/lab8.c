//lab8
#include<stdio.h>
struct sinhVien{
	char masv[7];
	char hoten[50];
	char nganh[30];
	float dtb;
};
//ham nhap sv
void nhap(struct sinhVien *sv){
	printf("Nhap ma sv");
	gets((*sv).masv);
	printf("Nhap ten sv");
	gets((*sv).hoten);
	printf("Nhap nganh hoc:");
	gets((*sv).nganh);
	printf("Nhap diem trung binh");
	scanf("%f",&(*sv).dtb);
}
//ham xuat sv
void hienThi(struct sinhVien sv){
	printf("")
	printf("%7s  |  %-30s  |  %-20s|  %.2f \n", sv.masv ,sv.hoten,sv.nganh,sv.dtb);
}
int main(){
	struct sinhVien sv;
	nhap(&sv);
	hienThi(sv);
	return 0;
}
