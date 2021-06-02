// nhap 1 so n kiem tra so do co phai so nguyen to
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(n<2){
		printf("%d khong phai so nguyen to",n);
		return 0;
	}
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
	   if(n%i==0){
	   	count++;
	   }
	}
	if(count==0){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai so nguyen to",n);
	}
	
}
