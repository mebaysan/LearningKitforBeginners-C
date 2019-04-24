#include<stdio.h>

int main(){
	
	
	int sayi,us;
	int sonuc =1;
	printf("Sayi girin : ");
	scanf("%d",&sayi);
	printf("Us girin : ");
	scanf("%d",&us);
	for(sayi=1;sayi<=us;sayi++){
		sonuc*=sayi;
		
	}
	printf("Ussü %d",sonuc);
	return 0;
}
