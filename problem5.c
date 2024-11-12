#include <stdio.h> // Gerekli kütüphane tanımlanıyor

int main(){ // Ana fonksiyon başlıyor
    int x ; // Kaç adet sayı girileceğini tutacak değişken tanımlanıyor

    // Kullanıcıdan kaç adet sayı gireceğini alıyoruz
    printf("Kaç adet sayı gireceksiniz: ") ; 
    scanf("%d",&x) ; 
    printf("\n"); 

    int arr[x] ; // Girilen sayıları tutacak dizi tanımlanıyor

    // Kullanıcıdan sayıları almak için döngü başlatılıyor
    for(int i = 0 ; i < x; i++){
        // Kullanıcıya hangi sıradaki sayıyı girdiğini belirtiyoruz
        printf("Sayı %d: ", i + 1) ; 
        scanf("%d", &arr[i]) ; 
        printf("\n") ; 
    }

    // Diziyi tersten yazdırmak için döngü başlatılıyor
    for(int j = x - 1 ; j >= 0; j--){
        // Dizinin mevcut elemanı ekrana yazdırılıyor
        printf("%d\n", arr[j]) ; 
    }

    return 0 ; // Ana fonksiyon başarıyla sonlandırılıyor
}
