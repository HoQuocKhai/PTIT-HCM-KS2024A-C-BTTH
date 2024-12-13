#include<stdio.h>
#include<math.h>
int main (){
	int n,a=2,i=0;
	printf("nhap so luong so nguyen to can tim : ");
	scanf("%d",&n);
	while (i<n){
		int cout=1,d=2;
		while(d<=sqrt(a)){
			if(a%d==0){
				cout=0;
			}
			d++;
		}
		if (cout==1){
			printf("%d ",a);
			i++;
		}
		a++;
	}
	return 0;
}
