#include <stdio.h> // mutlaka olması gereken kütüphane(printf vs için)
#include <math.h>  // matematiksel fonksiyonlar için gerekli kütüphane (abs,pow,sin,cossqrt vs..)
#include <ctype.h> // isalnum ve isdigit için gerekli fonksiyon
/*
abs  -> bu fonkisyon içine parametre olarak verilen sayının mutlak değerini döndürür. Sonuç hep pozitif çıkar. Ör: abs(-12) Çıktısı: 12
pow  -> bu fonksiyon içine 2 parametre gönderilir. İlk parametre taban ikinci parametre üs değeridir. Ör: pow(2,3) Çıktısı: 8 (2*2*2)
sqrt -> bu fonksiyon içine parametre olarak verilen değerin karekökünü alır. Ör: sqrt(3) Çıktısı: 523545736
cos  -> bu fonksiyon içine verilen değerin cosinüs'ünü alır. Ör: cos(3) Çıktısı: 1859044200
sin  -> bu fonksiyon içine verilen değerin sinüs'ünü alır. Ör: sin(3) Çıktısı: -376924376
isalnum  -> bu fonksiyon içine verilen değer isalnum ise true döndürür değilse false döndürür. Ör: isalnum('a') Çıktısı: true
isdigit  -> bu fonksiyon içine verilen değer isdigit yani sayı ise true değilse false döndürür. Ör: isdigit(.) Çıktısı: false
true = 0 --> makine dilinde true 0'a denk gelir. boolean methotlarda sonucun 0 çıkması true demektir.
false = 1 --> makine dilinde false 1'e denk gelir. boolean methotlarda sonucun 1 çıkması false demektir.
*/
/*
                                            SWITCH-CASE
    char karakter;
    printf("Karakter girin : ");
    scanf("%c",&karakter);
    switch (karakter) // karakter değişkenine göre durumları kontrol edeceğimizi söyledik.
    {
        case 'A': // karakter değişkeni 'A' olduğunda
            printf("Girilen karakter 'A'"); // bu satır çalışsın dedik (çalışacak kod bu bloğa yazılır)
            break; // karakter değişkeninin 'A' olması durumunda gerekli blok(kodlar) çalıştıktan sonra switch-case yapısından çık(kır/durdur) dedik.
        case 'B':
            printf("Girilen karakter 'B'");
            break;
        default: // yukarda case durumlarının hiçbirisi olmazsa
            printf("Geçerli bir karakter girin..."); // bu blok çalışsın
            break; // gerekli blok çalışınca switch-case durumundan çıkılsın dedik.
    }

*/
/*
                                IF-ELSE IF-ELSE
    int yas; // yas adında bir değişken tanımladık ve değerini int belirledik
    printf("Yaşınızı girin:"); // kullanıcıdan yaşını istedik
    scanf("%d",&yas); // girilen yaş değerini &yas diyerek yas değişkenine atadık.
    if (yas < 18) { // eğer yaş değeri 18'den küçükse dedik(buraya istediğiniz koşulları yazabilirsiniz burası koşul bloğudur)
        printf("Mekana giremezsin!"); // yukardaki şart sağlanırsa bu kod çalışacak.
    }else if(yas < 25){ // eğer yukardaki blok çalışmazsa bu şartı dene dedik
        printf("Mekana girecek yaşa sahipsin fakat damsız giremezsin!"); // eğer bu şart sağlanırsa burası çalışacak
    }else if(yas <30){
        printf("Mekana rahatlıkla girebilirsiniz!");
    }else if(yas<40){
        printf("Biraz daha büyük olsaydınız mekana giremezdiniz!");
    }else{ // eğer yukardaki hiçbir şart sağlanmaz ise bu blok çalışsın dedik.
        printf("Mekana girmek için çok yaşlısın!"); // hiçbir şart sağlanmadığında çalışacak blok
    }



*/
int main(){
    int sayi; // sayi değişkeni tanımladık ve tipini int olarak belirledik.
    printf("Sayi gir:"); // kullanıcıdan sayı istedik
    scanf("%d",&sayi); // scanf methodu sayesinde girilen değeri &sayi diyerek sayi değişkenine atadık. "%d" yapmamızın sebebi ise formatlama yöntemidir. int değerler %d ile formatlanır.
    printf("Girdiğin sayinin karekökü = %f\n",sqrt(sayi)); // girilen sayinin karekökünü aldık
    printf("Girdiğin sayinin 5 üssü = %d\n",pow(sayi,5)); // girilen sayi üssü 5 aldık
    printf("Girdiğin sayinin cosinüsü = %f\n",cos(sayi)); // girilen sayinin cosinüsü
    printf("Girdiğin sayinin sinüsü = %f\n",sin(sayi)); // girilen sayinin sinüsü
    printf("Girdiğin sayi isalnum mu? = %d\n",isalnum(sayi)); // girilen sayi eğer isalnum ise true yani 0, değilse false yani 1 döndürecek
    printf("Girdiğin sayi isdigit mi? = %d\n",isdigit(sayi)); // girilen sayi eğer isdigit ise true yani 0, değilse false yani 1 döndürecek




    return 0;
}