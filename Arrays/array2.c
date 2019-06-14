#include<stdio.h>
int main(){
    // Kullanıcıdan 5 sayı isteyeceğiz ve bu 5 sayıyı bir array'e alıp aritmetik ortalamasını bulacağız

    float sayilar[5]; // sayilar adında bir float değişkenimiz var ve bu değişken en fazla 5(5) elemanlı bir array([]) dedik
    float toplam = 0.0; // toplam değişkenini oluşturduk
    for (int i = 0; i < 5; i++) // sayilar arrayi içini doldurmak için bir for döngüsü
    {
        printf("Bir sayi girin: ");
        scanf("%f",&sayilar[i]); // girilen her sayıyı sayilar[i] diyerek o anki döngünün dönme değerine denk gelen index'e atama yapıyoruz. Örnek: girilen sayi : 15.23 ve sayilar[i] i ise 2 olsun (döngü 3. dönüşte) bu sayede sayilar[2] = 15.23 yani sayilar array'in 3. elemanı 15.23 olur
    }
    for (int i = 0; i < 5; i++) // toplam değerini oluşturmak için
    {
        toplam += sayilar[i]; // döngü her döndüğünde toplam değeri o anki array'in döngü değerine karşılık gelen indexteki eleman ile kendini toplasın. Örnek: toplam = 0 ve sayilar[i] için; 1-) ilk dönmede i= 0 girilen sayiların ilki de 12 varsayalım. Bu yüzden 0. dönmede toplam+= 12 yani 12 olacak. İkinci eleman 4.5 sayalım ve i = 1 olduğunda toplam(12)+=4.5 yani toplam 16.5 olur. bu böyle döngü bitene kadar gider.
    }
    printf("Girilen sayilarin toplami = %f \t aritmetik ortalamasi = %f",toplam,toplam/5);


}