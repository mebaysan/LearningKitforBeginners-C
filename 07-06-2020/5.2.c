#include <stdio.h>

int main()
{
    int sayi, fakto = 1, flag = 1;
    printf("Faktoriyelini almak istediğiniz sayıyı girin:");
    scanf("%d", &sayi);
    int asil_sayi = sayi;
    while (flag == 1)
    {
        fakto = fakto * sayi;
        sayi = sayi - 1;
        if (sayi == 1)
        {
            flag = 0;
        }
    }
    printf("%d sayısının faktoriyeli = %d", asil_sayi, fakto);
    return 0;
}
