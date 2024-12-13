#include<stdio.h>

int main (){
	int a,b;
	printf("nhap vao 1 so nguyen duong : ");
	scanf("%d",&a);
	for (b=1;b<(a+1);b++){
		if (a%b==0){
			printf("%d ",b);
		}
	}
	return 0;
}
