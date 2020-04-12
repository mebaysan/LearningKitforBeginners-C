#include <stdio.h>

int main()
{
    int toplam;
    int i;
    for (i = 0; i <= 185; i = i + 5)
    {                // 0’dan başla ve 185’e kadar 5’er 5’er giden loop açtık
        toplam += i; // her loopta o looptaki i değerini toplam değişkenine ekledik
    }
    printf("0+5+10+15+20+........+185 = %d", toplam); // output verdik
    return 0;
}
