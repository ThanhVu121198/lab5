// nhap 1 so nguyen n tim so thu n trong day fibonaci
#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int f,f1,f2;
	f=f1=f2=1;
	for(int i=3;i<=n;i++){
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	printf("Phan tu thu %d trong day fibonaci la: %d",n,f);
}
