#include<stdio.h>



int main(){
    // Verilmiş olan dizinin 4. elemanını değiştirin;bu diziyi tarayın.
    int array[5] = {10,20,30,40,50}; // 5 elemanlı bir array oluşturduk
    int sayac1=1,sayac2=1; // sayac değişkenlerimizi oluşturduk.
    for (int i = 0; i < 5; i++) // array değişkeninin eleman sayısı kadar dönecek bir döngü oluşturduk
    {
        printf("array degiskeninin %d. elemanı = %d\n",sayac1,array[i]); // sorunun 'bu diziyi tarayın' kısmı burası dizi elemanlarını tek tek geziyoruz
        sayac1++;
    }
    printf("****************************************");
    array[3] = 120; // burda dizinin 4. elemanını (bir çok programlama dilinde index 0'dan başlar) 120 olarak değiştiriyoruz
    for (int i = 0; i < 5; i++) // değişimi görmek için tekrar diziyi geziyoruz.
    {
        printf("array degiskeninin %d. elemanı = %d\n",sayac2,array[i]);
        sayac2++;
    }
    
    
    




}