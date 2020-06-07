#include <stdio.h>

int main()
{
    int hedef, toplam = 0;

    printf("1'den başlayıp kaça kadar toplamak istersiniz? ");
    scanf("%d", &hedef);
    for (int i = 0; i < hedef; i++)
    {
        toplam = toplam + i;
    }
    printf("1'den %d'e kadar olan sayıların toplamı = %d", hedef, toplam);
    return 0;
}
