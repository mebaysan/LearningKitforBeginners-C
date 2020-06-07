#include <stdio.h>
#include <math.h>

int ucgen_alan()
{
    int kenar1, kenar2, aradaki_aci, alan;
    printf("Kenar1 girin: \t");
    scanf("%d", &kenar1);
    printf("Kenar2 girin: \t");
    scanf("%d", &kenar2);
    printf("Aradaki açıyı girin: \t");
    scanf("%d", &aradaki_aci);
    alan = (kenar1 * kenar2 * sinl(aradaki_aci)) / 2;
    printf("Girdiğiniz üçgenin alanı = %d", alan);
}
int daire_alan()
{
    float yaricap, alan;
    float pi = 3.14;
    printf("DAirenin yarı çapını giriniz:\t");
    scanf("%f", &yaricap);
    alan = pi * pow(yaricap, 2);
    printf("Girdiğiniz dairenin alanı = %d", alan);
}
int dikdortgen_alan()
{
    int kisa_kenar, uzun_kenar, alan;
    printf("Uzun kenar girin: ");
    scanf("%d", &uzun_kenar);

    printf("Kısa kenar girin: ");
    scanf("%d", &kisa_kenar);
    alan = kisa_kenar * uzun_kenar;
    printf("Girdiğiniz dikdörtgenin alanı = %d", alan);
}
int yamuk_alan()
{
    int alt_kenar, ust_kenar, yukseklik;
    float alan;
    printf("Üst kenar girin: ");
    scanf("%d", &ust_kenar);
    printf("Alt kenar girin: ");
    scanf("%d", &alt_kenar);
    printf("Yükseklik girin: ");
    scanf("%f", &yukseklik);
    alan = ((ust_kenar + alt_kenar) / 2) * yukseklik;
    printf("Girdiğiniz yamuğun alanı = %f", alan);
}
int main()
{
    int islem;
    printf("1-)Üçgen Alan Hesapla\n2-)Daire Alan Hesapla\n3-)Dikdörtgen Alan Hesapla\n4-)Yamuk Alan Hesapla\nÇıkış(-1)");
    printf("Yapmak istediğiniz işlemi seçiniz: ");
    scanf("%d", &islem);
    switch (islem)
    {
    case 1:
        ucgen_alan();
    case 2:
        daire_alan();
    case 3:
        dikdortgen_alan();
    case 4:
        yamuk_alan();
    case -1:
        printf("Programdan çıkılıyor...");
        break;
    default:
        printf("Geçerli işlem numarası giriniz");
    }

    return 0;
}
