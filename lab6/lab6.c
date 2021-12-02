//lab6
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ham nhap mang 1 chieu
void nhap(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Nhap vao phan tu a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
//ham tinh trung binh cac so chia het cho 3 trong mang
int hamBai1(int a[],int n){
	int i,tong=0,count=0;
	for(i=0;i<n;i++){
		if(a[i]%3==0){
			tong=tong+a[i];
			count++;
		}
		else {tong=0; count=1;}	
	}
	float tb=tong/count;
	return tb;
}
//ham tinh max
int max(int a[], int n){
	int i,max = a[0];
	for ( i = 1; i < n; i++)
	if (max < a[i])
		max = a[i];
	return max;
	}
//ham tinh min
int min(int a[], int n)
{	int i,min = a[0];
    for (i = 1; i < n; i++)
	if (min > a[i])
		min = a[i];
    return min;

}
//ham sap xep giam dan
int sapXep(int a[], int n)
{	int i,j,tg;
	for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    printf("\nMang da sap xep la:\n ");
    for(i = 0; i < n; i++){
        printf("%5d\n", a[i]);
    }
    
}
//nhap ma tran
void NhapMaTran(int b[][100], int m, int n)
{	
	int i,j;
   for(i = 0; i < m; i++)
      for(j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &b[i][j]);
      }
}
//xuat ma tran
void XuatMaTran(int b[][100], int m, int n)
{
	int i,j;
   for(i = 0; i < m; i++)
   {
      for(j = 0; j < n; j++)
         printf("%d\t", b[i][j]);
      printf("\n");
   }
}
void maTranbinhPhuong(int b[][100], int m, int n){
	int i,j;
   for(i = 0; i < m; i++)
   {
      for(j = 0; j < n; j++)
         printf("%d\t",b[i][j]*b[i][j]);
      printf("\n");
   }
}
//Xuat ma tran binh phuong


int main(){
	int chon;
	do{
		system("cls");
		Menu:printf("-------------------MENU----------------------------\n");
		printf("1.Tinh trung binh cac so chia het cho 3 trong mang\n");
		printf("2.Tim min max trong mang\n");
		printf("3.Sap xep mang theo thu tu giam dan\n");
		printf("4.Tinh binh phuong cac phan tu trong mang 2 chieu\n");
		printf("5.thoat\n");
		printf("Moi ban chon:\t");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				printf("Bai 1:\n");
				int a[12];
				int n;
				nLai:printf("nhap gioi han so phan tu trong mang n= ");
				scanf("%d",&n);
				if(n<1){
					printf("Nhap it nhat 1 so");
					goto nLai;
				}else{
					nhap(a,n);
					printf("TB cac so chia het cho 3 la: %d\n",hamBai1(a,n));
				}
				break;
			case 2:
				printf("Bai 2:");
				nLai1:printf("nhap gioi han so phan tu trong mang n= ");
				scanf("%d",&n);
				if(n<2){
					printf("Nhap it nhat 2 so");
					goto nLai1;
				}else{
					nhap(a,n);
					printf("Max= %d\n",max(a,n));
					printf("Min= %d\n",min(a,n));
					}
				break;
			case 3:
				printf("Bai 3:");
				nLai2:printf("nhap gioi han so phan tu trong mang n= ");
				scanf("%d",&n);
				if(n<2){
					printf("Nhap it nhat 2 so\n");
					goto nLai2;
				}else {
				nhap(a,n); 
				sapXep(a,n);
				}
				break;
			case 4:
				printf("Bai 4");
				int b[100][100];
			    int m;
			    printf("nhap so hang n = "); scanf("%d",&n);
			    printf("nhap so cot m = "); scanf("%d",&m);
			    if(m<1||n<1||n==1&&m==1){ printf (" hang, cot ko hop le\n"); break;}
			    else{
				    printf("nhap vao ma tran:\n");
				    NhapMaTran(b, m , n);
				    XuatMaTran(b, m, n);
				    printf("=>\n");
				    maTranbinhPhuong(b,m,n);
			    }
				break;
			case 5:
				break;
			default:
				printf("Chon -1-2-3-4-5-");
				
		}
		printf("nhap phim bat ki de tiep tuc");
		fflush(stdin);
		getchar();
		
	}
	while(chon!=5);
	
return 0;
}
