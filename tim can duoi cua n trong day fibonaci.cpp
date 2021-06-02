// tim tiem can duoi cua n trong day fibonaci
#include<stdio.h>
int main(){
	int n,i,f,f1,f2;
	printf("Nhap n: ");
	scanf("%d",&n);
	f1=1;
	f2=1;
   while(f1+f2<n){
	  f=f1+f2;
	  f2=f1;
	  f1=f;
   }
     printf("Tiem can duoi cua %d trong day fibonaci la: %d",n,f);
} 
