//asm
#include<stdio.h>
#include <stdlib.h>
//hàm bài 1
//ham kiem tra so nguyen to & so chinh phuong
int Bai1(){
	int i,x;
		printf(" 1. Tim so nguyen to\n");
	   printf("kiem tra so nguyen to :");
			    scanf("%d",&x);
			    if(x<2){
			    	printf("%d khong phai so nguyen to",x);
				}else{
					for (i=2;i<x;i++){
				    	if(x%i==0){
				        printf(" %d ko  la so nguyen to\n",x);
				    	return 0;
				}				      	}//of if

				    printf("%d  la so nguyen to\n",x);	    
				}
		printf("2. Tim so chinh phuong\n");
    	printf:("Tim so chinh phuong\n");
		    printf("Nhap so x:");
		    scanf("%d",&x);
		    if (x <2) {
		    	printf("%d khong phai so chinh phuong\n",x);
			}else{
		    for (i=2;i<x;i++){
		    	if (i*i==x){
		    		printf ("x la so chinh phuong: %d",x);
		    		return 0;
		  		}
			}
			printf("%d ko la so chinh phuong",x);
    
			}
}
//void soNguyento(int x){
//	int i;
//	if(x<2){
//			    
//				}else{
//					
//				    	    
//				}
//}
//hàm bài 5
void doiTien(int tienDoi){
	
	
	int to500,to200,to100,to50,to20,to10,to5,to2,to1,sodu;
	
	to500 = tienDoi/500;
	sodu= tienDoi%500;
	
	to200 = tienDoi/200;
	sodu= tienDoi%200;
	
	to100 = tienDoi/100;
	sodu= tienDoi%100;
	
	to50 = tienDoi/50;
	sodu= tienDoi%50;
	
	to20 = sodu/20;
	sodu= sodu%20;
	
	to10 = sodu/10;
	sodu= sodu%10;
	
	to5 = sodu/5;
	sodu=sodu%5;
	to2 = sodu/2;
	to1 = sodu%2;
	printf("%d to 50K \n",to500);
	printf("%d to 50K \n",to200);
	printf("%d to 50K \n",to100);
	printf("%d to 50K \n",to50);
	printf("%d to 20K \n",to20);
	printf("%d to 10K \n",to10);
	printf("%d to 5K \n",to5);
	printf("%d to 2K \n",to2);
	printf("%d to 1K \n",to1);
	
}

//hàm bài 2
int UCLN(int a, int b){
    // N?u a = 0 => ucln(a,b) = b
    // N?u b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    return a; // return a or b, b?i vì lúc này a và b b?ng nhau
}

//hàm bài 4
void Bai4(){
	float tienD;
	printf("nhap so dien ");
	scanf("%f",&tienD);
	const float Bac1=1678;
	const float Bac2=1734;
	const float Bac3=2104;
	const float Bac4=2536;
	const float Bac5=2834;
	const float Bac6=2927;
	
	if(0<tienD<50){ printf("So tien can dong:%.2f\n",tienD*Bac1);}
			else if(tienD<=100){ printf("So tien can dong:%.2f\n",50*Bac1+(tienD-50)*Bac2);}
			else if(tienD<=200){ printf("So tien can dong:%.2f\n",50*Bac1+50*Bac2+(tienD-100)*Bac3);}
			else if(tienD<=300){ printf("So tien can dong:%.2f\n",50*Bac1+50*Bac2+100*Bac3+(tienD-200)*Bac4);}
			else if(tienD<=400){ printf("So tien can dong:%.2f\n",50*Bac1+50*Bac2+100*Bac3+100*Bac4+(tienD-300)*Bac5);}
			else if(tienD>=400){ printf("So tien ban can dong la: %.2f\n",50*Bac1+50*Bac2+100*Bac3+100*Bac4+100*Bac5+(tienD-400)*Bac6);}
			else{ printf("nhap so duong");
			}
			printf(" VND");
	

}

//hàm bài 3
int bai3(){
	
			int batdau,ketthuc,tien_karaoke;
			printf("\nNhap vao gio bat dau (12h -> 23h): ");
            scanf("%d",&batdau);
            printf("\nNhap vao gio ket thuc (bat dau < ket thuc < 23h: ");
            scanf("%d", &ketthuc);
            if(batdau>=12 && ketthuc<=23 && batdau<ketthuc){
                int thoigian=ketthuc-batdau;
                if(thoigian<=3)  tien_karaoke=thoigian*150;
                else if(thoigian>=4){
                    thoigian-=3;
                    tien_karaoke=(3*150)+((thoigian*150)-((thoigian*150)*30/100));  //tien karaoke 3h dau tien + tien karaoke sau 4h
                }
                if(14<=batdau<=17)  tien_karaoke-=tien_karaoke*10/100;
            }
            else{
                printf("\nGio bat dau phai nam trong khoang 12h -> 23h");
                printf("\nGio ket thuc phai nam trong khoang 12h -> 23h");
            }
            printf("\nTien karaoke: %d VND",tien_karaoke);
        
}

//hàm bài 6 tính lãi su?t vay ngân hàng hàng tháng

int bai6(){
	int tienVay,tongTienHangThang,tongTien,tienLaiHangThang;
	int tienGocHangThang=(tienVay/12);
	printf("Nhap so tien ban can vay: ");
	scanf("%d",&tienVay);
	int i;
	for(i=1;i<13;i++){
		tienLaiHangThang=0.05*tienVay;
		tongTienHangThang=tienLaiHangThang + tienGocHangThang;
		tongTien+=tongTienHangThang;
		tienVay=tienVay-tienGocHangThang;
		printf("So tien can tra trong thang: %d là ",i);
		printf("%d \n",tongTien);
	}
	printf("so Tien phai tra trong 12 thang(goc+lai) là = %d VND",tongTien+tienVay);
}


int bai10(){
	int t1,t2,m1,m2;
	printf("Phep tinh giua a/b va c/d\n");
	
	nhapLaimauso:printf("nhap a\n");scanf("%d",&t1);
	printf("nhap b\n");scanf("%d",&m1);
	printf("nhap c\n");scanf("%d",&t2);
	printf("nhap d\n");scanf("%d",&m2);
	if(m1==0||m2==0){
			printf("mau so # 0 chu \n");
			goto nhapLaimauso;
		}else{
		printf("2 phan so vua nhap la %d/%d va %d/%d\n",t1,m1,t2,m2);
		printf("Tong: %d/%d\t",(t1*m2+t2*m1),m1*m2);
		printf("Hieu: %d/%d\t",(t1*m2-t2*m1),m1*m2);
		printf("Tich: %d/%d\t",(t1*t2),m1*m2);
		printf("Thuong: %d/%d\t",(t1*m2),m1*t2);
		}
		
	
}
int bai9(){
	int r,i,sonhap,dem=0;
	printf("nhap so:");
	scanf("%d",&sonhap);
    for( i = 0; i <16 ; ++i){
        int r = 0 + rand() % (15 + 1 - 0);
        printf("Rand %d is %d\n",i, r);
        if(sonhap==r){
			dem++;
		}
        
    } 
	if(dem==0){printf("Chuc ban may man lan sau\n");}
	else if(dem==1){printf("Ban dc giai nhi\n");}
	else if(dem==2){printf("Ban duoc giai nhat\n");} 
}
int main(){
	int chon;
	do{
		
		Menu:
		system("cls");
		printf("1:Kiem tra so nguyen\n");
		printf("2:Tim USCLN va BSCLN\n");
		printf("3:Tinh tien cho quan karaok\n");
		printf("4:Tinh tien dien\n");
		printf("5: Chuc nang doi tien\n");
		printf("6:Tinh lai suat vay ngan hang hang thang\n");
		printf("7:Xay dung chuong trinh vay tien mua xe\n");
		printf("8:Sap xep thong tin sinh vien\n");
		printf("9: game Fpoly\n");
		printf("10:Tinh toan phan so \n");
		printf("---------------------");
		printf("Moi ban chon chuc nang\n");
		scanf("%d",&chon);
		
		switch (chon){
			case 1:
				printf("Chuc nang 1\n");
				
				Bai1();
				
				break;
			case 2:
				printf("Chuc nang 2\n");
				int a,b;
				printf("nhap a and b");
				scanf("%d%d",&a,&b);
				if(a<0||b<0)printf ("nhap so duong\n");
				else 
				{
					printf("UCLN:%d\n",UCLN(a,b));
					printf("BCNN:%d\n",a*b/UCLN(a,b));
				}
				break;
			case 3:
				printf("Chuc nang 3\n");
				bai3();
				break;
			case 4:
				printf("Chuc nang 4\n");
				Bai4();
				break;
			case 5:
				printf("Chuc nang 5\n");
				int tienDoi;
				nhapLai2:printf("nhap vao so tien can doi  =");
				scanf("%d",&tienDoi);
				if(tienDoi<=0){
					printf("phai nhap so duong \n");
					goto nhapLai2;
				}else{
					doiTien(tienDoi);
				}
				break;
			case 6:
				printf("Chuc nang 6\n");
				bai6();
				break;
			case 7:
				printf("Chuc nang 7 : Thay bo roi, deo can lam nua dau\n");
				break;
			case 8:
				printf("Chuc nang 8\n");
				break;
			case 9:
				printf("Chuc nang 9\n");
				bai9();

				break;
			case 10:
				printf("Chuc nang 10\n");
				bai10();
				break;
			default:
				goto Menu;	
		}
		system("pause");
	}
	while(chon!=3);
	return 0;
}
