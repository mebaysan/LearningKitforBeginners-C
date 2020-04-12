#include <stdio.h>

int main()
{
	int kac_saat,ucret;
	printf("Kac saat kullandiginizi girin: "); // kullanıcıdan kaç saat kullandığını istiyoruz
	scanf("%d",&kac_saat); // kullanıcıdan aldığımız değeri değişkene atıyoruz
	
	if(0<kac_saat && kac_saat<=29){ // kac saat kullanılmış kontrol yapıyoruz
		ucret = 29; // eğer 29 saat veya daha az ise stadart ücret 29 tl
	}else if(30<=kac_saat && kac_saat<=89){ // kac saat kullanılmış kontrol yapıyoruz
		ucret = 25 + ((kac_saat-30) * 1); // eğer 89 saat ve 30 saat arası ise 25 tl + 30 saati aşan her saat için +1 tl
	}else if(90<=kac_saat && kac_saat<=149){ // kac saat kullanılmış kontrol yapıyoruz
		ucret = 66 + ((kac_saat-90) * 2); // eğer 90 saat ve 149 saat arası ise 66 tl + 90 saati aşan her saat için +2 tl
	}else if(150<=kac_saat && kac_saat<=299){ // kac saat kullanılmış kontrol yapıyoruz
		ucret = 75 + ((kac_saat-150) * 3); // eğer 150 saat ve 299 saat arası ise 75 tl + 150 saati aşan her saat için +3 tl
	}else if(300<=kac_saat){ // kac saat kullanılmış kontrol yapıyoruz
		ucret = 84 + ((kac_saat-300) * 5); // eğer 300 saatten fazla ise 84 tl + 300'ü her aşan saat için + 5 tl
	}
    
    
    
    printf("%d saat icin kullanim ucretiniz = %d tl",kac_saat,ucret);
    return 0;
}
