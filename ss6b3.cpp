#include<stdio.h>
int main(){
	int pass = 123456;
	int mk;
	printf("nhap mat khau");
	scanf("%d",&mk);
	
	while(mk!=pass){
		printf("sai mat khau roi");
		scanf("%d",&mk);
	}
	printf("mat khau dung roi");
	return 0;
}
