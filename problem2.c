#include <stdio.h> // Gerekli kütüphane tanımlanıyor

int main(){ // Ana fonksiyon başlıyor

    // 2'den 100'e kadar çift sayıları içeren bir dizi tanımlanıyor ve başlangıç değerleri atanıyor
    int cift[]={2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100} ; 

    // Dizinin elemanları üzerinde döngü işlemi gerçekleştiriliyor
    for(int i=0 ; i<50 ; i++){
        // Dizinin mevcut elemanı ekrana yazdırılıyor
        printf("%d\n",cift[i]) ; 
    }

    return 0 ; // Ana fonksiyon başarıyla sonlandırılıyor
}
