#include <stdio.h>

int main()
{
    int flag = 0;
    int toplam = 0;
    int kg;
    int malzeme_sira_no = 1;
    while (flag != 1)
    {
        printf("Yüklenecek %d. malzemenin ağırlığını girin: ", malzeme_sira_no);
        scanf("%d", &kg);
        if (kg != -1)
        {
            toplam = toplam + kg;
            malzeme_sira_no = malzeme_sira_no + 1;
        }
        else
        {
            printf("Girilen %d adet malzemenin toplam ağırlığı = %d kg\n", malzeme_sira_no, toplam);
            flag = 1;
        }
    }
    return 0;
}
