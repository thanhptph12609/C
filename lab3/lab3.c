//lab3
//Thanhptph12609
#include<stdio.h>
#include<math.h>
int main(){
	printf("LAB3 \n");
	int n;
	float a,b,c;
	const float Bac1=1678;
	const float Bac2=1734;
	const float Bac3=2104;
	const float Bac4=2536;
	const float Bac5=2834;
	const float Bac6=2927;
	Menu:
		printf("Menu\n");
		printf("Chuc nang 1:In ra hoc luc sinh vien\n");
		printf("Chuc nang 2:Giai pt ax+b=0 \n");
		printf("Chuc nang 3:Giai pt ax^2+ bx + c = 0 \n");
		printf("Chuc nang 4:Tinh tien dien\n");
		printf("----------------------------------\n");
		printf("Moi chon chuc nang (1-2-3-4): ");
		scanf("%d",&n);
	switch (n){
		case 1:
			printf("Bai 1 :");
			nhapLai:printf("nhap vao diem sinh vien: ");
			scanf("%f",&a);
			if(a>10||a<0){
				printf("nhap tu 0-10");
				goto nhapLai;
			}else{
				if(a>=9){
					printf("Hoc luc xuat sac");
				}else if(8<=a){
					printf("Hoc luc gioi");
				}else if(6.5<=a){
					printf("Hoc luc kha");
				}else if(5<=a){
					printf("Hoc luc trung binh");
				}else if(3.5<=a){
					printf("Hoc luc yeu");
				}else {
					printf("Hoc luc kem");
				}
			}
				
			break;
		case 2:
			printf("Bai 3: PT ax+b =0\n");
			printf("nhap a = ");
    		scanf("%f",&a);
    		printf("nhap b = ");
    		scanf("%f",&b);
			if(a==0){
    				if(b==0){
    					printf("PT co vo so nghiem");
    				}else{
    					printf("PT vo nghiem");
    				}
    			}else{
    				printf("PT co nghiem x = %.0f",-b/a);
    			}
			break;
		case 3:
			printf("Bai 3: PT bac 2 ax^2+bx+c =0\n");
			printf("nhap a = ");
    		scanf("%f",&a);
    		printf("nhap b = ");
    		scanf("%f",&b);
    		printf("nhap c = ");
    		scanf("%f",&c);
    		if(a!=0){
    			//a!=0
    			float delta=b*b-4*a*c;
    			if(delta<0){printf("PT vo nghiem");}
    			else if(delta==0){printf("PT co nghiem kep x= %f",-b/(2*a));}
    			else{
				printf("PT co nghiem X1= %f",(-b+sqrt(delta))/(2*a));
				printf("PT co nghiem X2= %f",(-b-sqrt(delta))/(2*a));
				}
			}else{
				//a=0
				if(b==0){
    				if(c==0){
    					printf("PT co vo so nghiem");
    				}else{
    					printf("PT vo nghiem");
    				}
    			}else{
    				printf("PT co nghiem x = %.0f",-c/b);
    			}
			}
			break;
		case 4:
			printf("Bai 4\n");
			printf("nhap vao so dien tieu thu hang thang: ");
			scanf("%f",&a);
			if(0<a<50){ printf("So tien can dong:%.2f",a*Bac1);}
			else if(a<=100){ printf("So tien can dong:%.2f",50*Bac1+(a-50)*Bac2);}
			else if(a<=200){ printf("So tien can dong:%.2f",50*Bac1+50*Bac2+(a-100)*Bac3);}
			else if(a<=300){ printf("So tien can dong:%.2f",50*Bac1+50*Bac2+100*Bac3+(a-200)*Bac4);}
			else if(a<=400){ printf("So tien can dong:%.2f",50*Bac1+50*Bac2+100*Bac3+100*Bac4+(a-300)*Bac5);}
			else if(a>=400){ printf("So tien ban can dong la: %.2f",50*Bac1+50*Bac2+100*Bac3+100*Bac4+100*Bac5+(a-400)*Bac6);}
			else{ printf("nhap so duong");
			}
			printf(" VND");
			break;
		default:
			printf("chon 1-4 thoi ");
			goto Menu;		
	}

}
