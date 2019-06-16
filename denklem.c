#include<stdio.h>
#include<math.h>
int main(){

    //x**2 +y formülünü x 1’den 10’a kadar 
    int y,x2,sonuc;
    printf("Istenilen y degerini gir: "); // y degerini kullanıcıdan istiyoruz
    scanf("%d",&y); // istediğimiz y degerini y degiskenine atıyoruz
    printf("x degeri 1'den kaca kadar donsun : "); // kullanıcıdan x degerini kaca kadar dondureceğimizi istiyoruz
    scanf("%d",&x2); // gelen degeri x2'ye atıyoruz. for döngüsünde işimize yarayacak.
    for (int x = 0; x <= x2; x++)
    {
        sonuc = pow(x,2) + y;
        printf("%d**2 + %d = %d\n",x,y,sonuc);
    }
    


}