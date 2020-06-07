#include <stdio.h>

int main()
{
    int notlar[29];
    int sayac = 0;
    int not, gecen = 0, kalan = 0;
    while (sayac <= 29)
    {
        printf("%d. notu girin: ", sayac);
        scanf("%d", &not);
        notlar[sayac] = not;
        sayac++;
    }
    for (int i = 0; i <= 29; i++)
    {
        if (notlar[i] >= 50)
        {
            gecen = gecen + 1;
        }
        else
        {
            kalan = kalan + 1;
        }
    }
    printf("Dersi geçenler = %d ve kalanlar = %d kişidir.", gecen, kalan);

    return 0;
}
