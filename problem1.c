#include <stdio.h> // Gerekli kütüphane tanımlanıyor

int main(){ // Ana fonksiyon başlıyor

    // 0'dan 10'a kadar olan sayıları içeren bir dizi tanımlanıyor ve başlangıç değerleri atanıyor
    int arr[11]={0,1,2,3,4,5,6,7,8,9,10} ; 

    // Dizinin elemanları üzerinde döngü işlemi gerçekleştiriliyor
    for(int i=0 ; i<=10 ; i++){
        // Dizinin mevcut elemanı ekrana yazdırılıyor
        printf("%d\n",arr[i]) ; 
    }

    return 0 ; // Ana fonksiyon başarıyla sonlandırılıyor
}
