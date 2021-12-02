#include<stdio.h> // khai bao thu vien ham
#include <stdlib.h>
int main(){
	do{
		int chon;
		system(cls);
		nhapLai:printf("___menu___\n");
		printf("1: tinh tong 2 so a b ");
		printf("2: tinh binh phuong");
		printf("3.Thoat");//
		printf("chon menu:");
		scanf("%d",&chon);
		switch(chon){
			case 1: 
			printf("bai 1");
			break;
			case 2: 
			printf("bai 2");
			break;
			case 3: 
			printf("bai 3");
			break;
			default: 
			printf("nhap lai menu");
			goto nhapLai;	
		}
		system(pause);
	}while(chon!=3);
	
return 0;	
}
