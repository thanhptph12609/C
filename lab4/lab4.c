#include<stdio.h>
#include<math.h>
int main(){
	int i,x;
	do{
		printf(" MENU\n");
		printf(" 1. Tinh trung binh cong cac so chia het cho 2\n");
		printf(" 2. Tim so nguyen to\n");
		printf("3. Tim so chinh phuong\n");
		printf("4. Thoat\n");
		printf("Xin moi chon chuc nang:\n");
	    scanf("%d",&i);
	     switch(i){
        case 1: printf("Tinh trung binh cong cac so tu nhien chia het cho 2:\n");
					int min,max,temp;
				printf("\nNhap vao min, max: ");
				scanf("%d %d", &min, &max);
				if(min>max){
				    temp=max;
				    max=min;
				    min=temp;
				}
				float tong=0,count=0, trungBinh=0;
				for(i=min; i<=max; i++)
				{
				if(i%2==0)
				{
				        tong += i;
				        count++;
					}
				}
				if(count==0) count=1;
				trungBinh=tong/count;
				printf("\nTrung binh tong cua cac so chia het cho 2 = %f", trungBinh);
			    break;
   	    case 2: printf("Tim so nguyen to\n");
		   		
			    printf("kiem tra so nguyen to :");
			    scanf("%d",&x);
			    if(x<2){
			    	printf("%d khong phai so nguyen to",x);
				}else{
					for (i=2;i<x;i++){
				    	if(x%i==0){
				        printf(" %d  la so nguyen to\n",x);
				    	return 0;
				      	}//of if
				}
				    printf("%d khong phai la so nguyen to\n",x);	    
				}
						break;
    case 3: printf:("Tim so chinh phuong\n");
		    int x,i;
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
			break;
    case 4: printf("Ket thuc chuong trinh");break;
    default : printf("\n xin moi chon lai");
}
system ("pause");
}while(i !=4);
return 0;
}

//of main
