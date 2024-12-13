#include<stdio.h>
#include<math.h>
int main (){
	int a;
	printf("nhap vao 1 so nguyen duong : ");
	scanf("%d",&a);
	if (a<2){
		printf("%d khong phai la so nguyen to",a);
	}else if(a==2){
		printf("%d la so nguyen to",a);
	}else {
		for (int i=2;i<a;i++){
			if(i<=sqrt(a)){
				if(a%i==0){
					printf("%d khong phai la so nguyen to",a);
					break;
				}
			}else{
				printf("%d la so nguyen to",a);
				break;
			}
		}
	}
	return 0;
}
