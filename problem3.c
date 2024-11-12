#include <stdio.h> // Gerekli kütüphane tanımlanıyor

int main(){ // Ana fonksiyon başlıyor

    int arr[5] ; // 5 elemanlı bir dizi tanımlanıyor
    int toplam = 0 ; // Toplamı tutmak için bir değişken tanımlanıyor ve 0'a eşitleniyor

    // Kullanıcıdan 5 sayı almak için döngü başlatılıyor
    for(int i = 0 ; i < 5; i++) {
        // Kullanıcıdan sayı alınıyor ve diziye atanıyor
        printf("Sayı %d: ", i + 1); 
        scanf("%d", &arr[i]) ; 

        // Girilen sayı toplama ekleniyor
        toplam = arr[i] + toplam ; 
    }

    // Toplam ekrana yazdırılıyor
    printf("Toplam = %d", toplam); 

    return 0 ; // Ana fonksiyon başarıyla sonlandırılıyor
}
