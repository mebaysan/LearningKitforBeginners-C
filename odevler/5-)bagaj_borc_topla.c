#include <stdio.h>

int main()
{
    int normal_bagaj_kg, el_bagaj_kg, ucret; // değişkenleri tanımladık
    // normal bagaj -> 20kg          ++ 8₺ per kg
    // el bagaj     -> 8kg           ++ 5₺ per kg

    printf("Bagaj kilonuzu yazınız:  ");
    scanf("%d", &normal_bagaj_kg);

    printf("El Bagajı kilonuzu yazınız:  "); // kullanıcıdan inputlarımızı aldık
    scanf("%d", &el_bagaj_kg);

    if (normal_bagaj_kg <= 20 && el_bagaj_kg <= 8)
    { // 2 bagaj içinde limitlerin aşılmadığı durum

        ucret = 0;
    }
    else if (normal_bagaj_kg > 20 && el_bagaj_kg > 8)
    { // 2 bagajında limitleri aştığı durum

        ucret += ((normal_bagaj_kg - 20) * 8) + ((el_bagaj_kg - 8) * 5);
    }
    else if (normal_bagaj_kg > 20 && el_bagaj_kg <= 8)
    { // sadece normal bagajın limiti aştığı durum

        ucret += (normal_bagaj_kg - 20) * 8; // 21-20 = 1 -> kaç kg aştığımızı verir ve *8 ile toplam borç hesaplanır
    }
    else if (el_bagaj_kg > 8 && normal_bagaj_kg <= 20)
    { // sadece el bagajının limiti aştığı durum

        ucret += (el_bagaj_kg - 8) * 5; // 9-8= 1 ->el bagajını kaç kg aştığımızı verir ve *5 ile toplam borç hesaplanır
    }

    printf("Bagajınız -> %d kg\nEl Bagajınız -> %d kg\nToplam Borcunuz ->%d ₺", normal_bagaj_kg, el_bagaj_kg, ucret); // kullanıcıya output veriyoruz
    return 0;
}
