#include<stdio.h>

int main (){
	int a,b,c,d;
	printf("nhap so gio lam viec trong thang: ");
	scanf ("%d",&a);
	printf("nhap muc luong theo gio: ");
	scanf ("%d",&b);
	if(a>160){
		c=b*0.1;
		d=a*b+c;
		printf("tong tien luong la : %d",d);
	}	else{
		d=a*b;
		printf("tong tien luong la : %d",d);
	}
	return 0;
}
