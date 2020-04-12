#include <stdio.h>
#include <math.h>

int main()
{
    int sayac = 0;

    int vize, final, ortalama; // değişkenleri tanımladık

    int sayac2 = 1;

    while (sayac <= 20)
    {                                                 // toplam 20 öğrenci alacağımız için 20lik bir loop başlattık
        printf("%d. öğrencinin vize notu: ", sayac2); // kullanıcıdan input aldık
        scanf("%d", &vize);                           // değikene set ettik
        printf("%d. öğrencinin final notu: ", sayac2);
        scanf("%d", &final);
        ortalama = (vize + final) / 2;                                // değişkenleri toplayarak ve ikiye bölerek ortalamayı bulduk
        printf("%d. öğrencinin ortalaması = %d\n", sayac2, ortalama); // kullanıcıya output verdik
        printf("------------------------\n");
        sayac2++; // bir sonraki öğrenciye geçmek için sayac2’yi 1 artırdık
    }
    return 0;
}
