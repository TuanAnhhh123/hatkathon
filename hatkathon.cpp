#include<stdio.h>
#include<stdlib.h>
int main(){
	int num[100] ;
	int n, currentIndex;
	int max, min;
	do{
		printf("*****MENU*****\n");
		printf("1.Nhap gia tri n phan tu cua mang\n");
		printf("2.In gia tri cac phan tu trong mamg\n");
		printf("3.Tinh tong cac phan tu chia het cho 2 va 3 trong mang\n");
		printf("4.In ra gia tri lon nhat va nho nhat trong mang\n");
		printf("5.Su dung thuat toan sap xap chen sap xep mang tang dan\n");
		printf("6.Tinh tong các phan tu là so nguyen to trong mang\n");
		printf("7.Sap xep cac phan tu le chia het cho 5 theo thu tu giam dan va cac phan tu chan chia het cho 5 theo thu tu giam dan\n");
		printf("8.Nhap gia tri m va chen vao gia tri m vao mang\n");
		printf("9.Thoat\n");
		int choice;
		scanf("%d",&choice);
		int sum;
		switch(choice){
			case 1:
				printf("Nhap so phan tu cua mang: ");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
					printf("num[%d]= ",currentIndex);
					scanf("%d",&num[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang la:\n");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",num[i]);
				}
				printf("\n");
				break;
			case 3:
				sum=0;
				printf("Cac phan tu co gia tri chia het cho 2 va 3 trong mang la: \n");
				for(int i=0;i<currentIndex;i++){
					if(num[i]%2==0 && num[i]%3==0){
						printf("%d\t",num[i]);
					    sum+=num[i];
					}
				}
				printf("Tong cac so chan trong mang la: %d",sum);
				break;
			case 4:
				max=num[0];
				min=num[0];
				for(int i=0;i<currentIndex;i++){
					if(max<num[i]){
						max=num[i];
					}
					if(min>num[i]){
						min=num[i];
					}
				}
				printf("GTLN la %d va GTNN la %d",max,min);
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit(0);
			default:
				printf("Vui long chon tu 1--9");
  }
}while(1==1);
}
