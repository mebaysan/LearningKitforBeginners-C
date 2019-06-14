#include<stdio.h>
int main(){
    int sayilar[] = {5,12,45,56,78,123};
    /*
    int -> array type
    sayilar -> array (objecct) name
    [] -> array olduğunu belirtir
    {} -> array elemanları bricket içine tanımlanır
    5,12,45.. -> array elemanları
     */
    printf("liste degiskeninin 2. elemanı = %d\n",sayilar[1]);
    /*
    Bir array'in istediğimiz sıradaki elemanını almak için:
    arrayAdi[istediğinElemanNumarası(type -> int)]
    -----------------------------------------------------------
    array indexleri 0'dan başlar. sayilar[0] demek;
    sayilar arrayin ilk elemanını almak demektir.
     */
    for (int i = 0; i < 5; i++)
    {
        printf("sayilar listesinin %d'ninci elemanı = %d\n",i,sayilar[i]);
    }
    /*
    - bir for döngüsü oluşturduk
    - 0'dan başlattık
    - sayilar array'in eleman sayisi kadar -1 kere döndük
    (arraylerde index sayisi 0'dan başlar)
    - i -> döngünün dönme sayısı
    sayilar[i] -> döngü her döndüğünde i 1 artacak bu sayede sayilar
    dizisi içerisindeki tüm elemanları gezmiş olacağız:
    sayilar[0(döngüden dolayı aslında i gelmiş olacak)] -> ilk eleman
    sayilar[1(döngüden dolayı aslında i gelmiş olacak)] -> ikinci eleman
    .
    .
    .
    sayilar[4] -> beşinci eleman
    
     */
    


}