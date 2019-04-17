#include <stdio.h>


int main(){
	
	float sayi = 0;
	float toplam = 0;
	float ort = 0;
	float tane = 0;
	
	
	while(sayi>=0){
		printf("Sayi girin(Pozitif)) : \n");
		scanf("%f",&sayi);
		tane++;
		toplam = toplam + sayi;
		
	}
	printf("Toplam = %f\nOrtalama = %f\nKac sayi girildi = %f",toplam,toplam/tane,tane);
	
	
	return 0;
}
