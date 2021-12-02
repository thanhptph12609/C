//lab5
#include<stdio.h>
//ham tim so max trong 3 so vua nhap
int max(int a, int b,int c){
	int max=a;
	if(b>=max) {max=b;}
	if(c>=max){max=c;}
	return max;
}	
//ham kiem tra nam nhuan
int checkYear(int year){
	int check=0;
	if(year%400==0) check=1;
	if(year%4==0 &&year%100!=0) check=1;
	return check;
}
//ham hoan vi
int hoanVi(int a,int b){
	int temp = a;   
    a = b; 
    b = temp; 
    printf("\na = %d, b = %d", a, b);
	
}

int main(){
	int chonBai;
	int a,b,c;
	Menu:
		printf("-----------MENU------------\n");
		printf("Bài 1: Tim ra so lon nhat\n");
		printf("Bài 2: Ham tinh nam nhuan\n");
		printf("Bài 3: Ham hoan vi\n ");
		printf("Chon bai: ");
		scanf("%d",&chonBai);
	switch(chonBai){
		case 1:
			printf("---Bài 1---\n");
			printf("nhap vao 3 so:");
			int x,y,z;
			scanf("%d %d %d",&x,&y,&z);
			printf("max %d",max(x,y,z));
			break;
		case 2:
			printf("---Bài 2---");
			int year;
			printf("Nhap nam vao de kiam tra nhuan hay khong :");
			scanf("%d",&year);
			if(checkYear(year)==1)printf("%d La nam nhuan",year);
			else printf("%d khong la nam nhuan",year);
			break;
		case 3:
			printf("---Bài 3---");
			printf("nhap a=");
			scanf("%d",&a);
			printf("nhap b=");
			scanf("%d",&b);
			printf("a=%d b=%d sau hoan vi",a,b);
			hoanVi(a,b);
			break;
		default:
			goto Menu;
			
	
	}

}
//ham tim so lon nhat

				
