#include<stdio.h>

int main(){
	
	
	int i,j;
	float score,ort,toplam = 0;
	for(i=1;i<=5;i++){
		

		for(j=1;j<=3;j++){
					
			printf("%d . oyuncunun %d . skorunu girin:\n",i,j); // i'ninci oyuncunu j'ninci skorunu girin
			scanf("%f",&score);
			toplam = toplam + score;	
			
		}
		ort = toplam / 3;
		printf("%d ninci oyuncunun ortalamasi = %f dir\n",i,ort);
		toplam = 0;
	}
	
	
	
	
	
	return 0;
}
