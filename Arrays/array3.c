#include<stdio.h>
int main(){
    /*
                MATRİS ÖRNEĞİ
        1   2   5   7
        6   8   3   2    -> Bu yapıya matris denir
        0   5   7   4
     */

    int matris[3][4] = {{1,2,5,7},{6,8,3,2},{0,5,7,4}};
    // yukardaki matrisi oluşturduk.
    // bir matris(çok boyutlu array) oluşturuyoruz. İlk parametre(3) satırı, İkinci parametre(4) sütunu belirtir. Kaç sütun kaç satır olmasını istiyorsak belirliyoruz.
    /*
    array oluşturur gibi bricket({}) açıyoruz ve satır sayısı kadar 
    bircket({}) ve her satıra (satır için açılan bricket içine) sütun sayısı kadar eleman giriyoruz
    (sırasıyla {{1,2,5,7},{6,8,3,2}} -> ilk satır {1,2,5,7} ilk satır ilk kolon -> 1, ilk satır ikinci kolon -> 2, 
    ilk satır üçüncü kolon -> 5, ilk satır dördüncü kolon -> 7)
    ikinci satır {6,8,3,2} ikinci satır ilk kolon -> 6, ikinci satır ikinci kolon -> 8, 
    ikinci satır üçüncü kolon -> 3, ikinci satır dördüncü kolon -> 2)    
     */
    printf("Matris'in ucuncu satiri dorduncu kolonu = %d\n\n\n\n\n",matris[2][3]);

    // satır için for döngüsü. Bu her döndüğünde bir sonraki satıra geçecek
    for (int i = 0; i < 3; i++)
    {
        // sütun için for döngüsü. Bu her döndüğünde bir sonraki sütuna geçecek(mevcut bulunduğu 'i' satırı için)
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
        
    }
    printf("\n\n\n\n\n");

        // input ile matris oluşturma
    int matris2[2][2]; // matris2 değişkeni 2v2 lik bir matris olsun dedik
    for (int x = 0; x < 2; x++)
    {
        for (int z = 0; z < 2; z++)
        {
            printf("Matrisin %d satiri icin %d'ninci kolonu girin : \n",x,z);
            scanf("%d",&matris2[x][z]); // girilen değer z yerine gececek ve o anki döngü değeriyle eşleşen kolona ait değer olacak
        }       
    }
    printf("\nTebrikler oluşturduğun matris2 değişkeni işte burada:\n");
    for (int k = 0; k < 2; k++)
    {
        // sütun için for döngüsü. Bu her döndüğünde bir sonraki sütuna geçecek(mevcut bulunduğu 'l' satırı için)
        for (int l = 0; l < 2; l++)
        {
            printf("%d ",matris2[k][l]);
        }
        printf("\n");
        
    }
}