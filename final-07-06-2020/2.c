#include <stdio.h>

int main()
{
    int flag = 1;
    int sayi, kucuk_sayi = 0, buyuk_sayi = 1;
    int sayi_adedi = 1;
    while (flag == 1)
    {
        printf("Sayı girin: ");
        scanf("%d", &sayi);
        if (sayi != -1)
        {
            if (sayi >= buyuk_sayi)
            {
                buyuk_sayi = sayi;
            }
            else
            {
                kucuk_sayi = sayi;
            }
            sayi_adedi = sayi_adedi + 1;
        }
        else
        {
            flag = 0;
            printf("Girdiğiniz %d sayıdan en büyüğü -> %d ve en küçüğü -> %d\n", sayi_adedi, buyuk_sayi, kucuk_sayi);
        }
    }
    return 0;
}
