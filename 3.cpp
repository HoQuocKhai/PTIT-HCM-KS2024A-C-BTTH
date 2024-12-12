#include<stdio.h>

int main (){
	char d[]="========";
	int a;
	float b,c;
	printf("%sCHUONG TRINH CHUYEN DOI TIEN TE%s",d,d);
	printf("\n1. USD to VND\n2. EUR to VND\n3. GBP to VND\n4. JPY to VND\n5. VND to USD\n6. VND to EUR\n7. VND to GBP\n8. VND to JPY");
	printf("\nNhap don vi tien te ban muon chuyen doi(1-8) : ");
	scanf("%d",&a);
	printf("\nNhap so tien ban muon doi : ");
	scanf("%f",&b);
	switch(a){
	case 1:
		c=23500*b;
		printf("%.2f USD = %.2f VND",b,c);
		break;
	case 2:
		c=25000*b;
		printf("%.2f EUR = %.2f VND",b,c);
		break;
	case 3:
		c=28000*b;
		printf("%.2f GBP = %.2f VND",b,c);
		break;
	case 4:
		c=180*b;
		printf("%.2f JPY = %.2f VND",b,c);
		break;
	case 5:
		c=b/23500;
		printf("%.2f VND = %.2f USD",b,c);
		break;
	case 6:
		c=b/25000;
		printf("%.2f VND = %.2f EUR",b,c);
		break;
	case 7:
		c=b/28000;
		printf("%.2f VND = %.2f GBP",b,c);
		break;
	case 8:
		c=b/180;
		printf("%.2f VND = %.2f JPY",b,c);
		break;
	default:
		printf("ban nhap sai dinh dang roi");
	}
	return 0;
}
