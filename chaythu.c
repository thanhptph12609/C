#include<stdio.h>
void bai3(){

    int sogio,tongtien,batdau,ketthuc;
    nhaplai:
	printf("nhap vao thoi gian bat dau karaoke: ");
	scanf("%d",&batdau);
	fflush(stdin);
	printf ("nhap vao thoi gian ket thuc karaoke: ");
	scanf("%d",&ketthuc);
	sogio=(int)batdau-ketthuc;
	tongtien=sogio*50000;
	if( sogio>=4 ){ tongtien=tongtien*70/100;}
	fflush(stdin);
	if(
	    (23>batdau && batdau>12) && 
	    (12<ketthuc &&ketthuc<23) && 
	    batdau<ketthuc)
	{
	if (14<=batdau && ketthuc<=17)
	{printf("tong tien ban phai tra la: %d",tongtien*90/100);}
	else {
	printf(" tong tien ban phai tra la: %d",tongtien);}
	if(14<=batdau && ketthuc<=17 && sogio>=4){
	printf("tong tien ban phai tra la: %d",tongtien*60/100);
	}
	
	
}

else {printf("thoi gian nhap sai");goto nhaplai;}
}
void main(){
	bai3();
}
