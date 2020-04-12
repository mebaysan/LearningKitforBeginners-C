#include <stdio.h>
#include <math.h>

int main()
{
    int sayi;
    printf("Sayi gir:");                               // kullanıcıdan sayı istedik
    scanf("%d", &sayi);                                // aldığımız sayıyı değişkene atadık
    int sonuc = pow(sayi, 3);                          // sayının küpünü aldık
    printf("Girdiğin sayinin karekökü = %d\n", sonuc); // sayıyı kullanıcıya gösterdik
    return 0;
}
