#include <stdio.h>
#include <math.h>

int main()
{
    int k_sayi;
    int b_sayi;
    int toplam;
    int sayac;                       // değişkenlerimizi tanımladık
    printf("Küçük sayıyı girin:\n"); // kullanıcıdan başlangıç limit değer istedik
    scanf("%d", &k_sayi);            // aldığımız değeri değişkene atadık
    printf("Büyük sayıyı girin:\n");
    scanf("%d", &b_sayi);
    while (k_sayi <= b_sayi)
    {                    // küçük limit değer, büyük limit değerden küçük olduğu sürece
        sayac = k_sayi;  // sayac değerimizi set ettik
        toplam += sayac; // döngü her döndüğünde sayaç değişkenimizi toplama ekledik
        k_sayi++;        // döngüyü sonlandırabilmek ve iki sayı arasındaki sayıları almak için her loopta limit artırdık
        if (k_sayi == b_sayi)
        { // limitler birbirine eşit olunca loop kırdık
            break;
        }
    }
    toplam += b_sayi;                                           // toplama son limiti de eklememiz gerektiğinden uç limiti ekledik
    printf("Girdiğiniz 2 sayı arasındaki toplam = %d", toplam); // kullanıcıya sayıyı verdik
    return 0;
}
