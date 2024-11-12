#include <stdio.h> // Gerekli kütüphane tanımlanıyor

int main() { // Ana fonksiyon başlıyor
    int x; // Kaç sayı girileceğini tutacak değişken tanımlanıyor

    // Kullanıcıdan kaç sayı gireceğini alıyoruz
    printf("Kaç sayı gireceksiniz: ");
    scanf("%d", &x);
    printf("\n");

    int arr[x]; // Girilen sayıları tutacak dizi tanımlanıyor

    // Kullanıcıdan sayıları almak için döngü başlatılıyor
    for (int i = 0; i < x; i++) {
        printf("Sayı %d: ", i + 1); // Kullanıcıya hangi sıradaki sayıyı girdiğini belirtiyoruz
        scanf("%d", &arr[i]);
        printf("\n");
    }

    int enBuyuk = arr[0]; // İlk elemanı varsayılan en büyük değer olarak belirliyoruz

    // En büyük sayıyı bulmak için döngü başlatılıyor
    for (int j = 1; j < x; j++) {
        if (arr[j] > enBuyuk) {
            enBuyuk = arr[j]; // Yeni en büyük değeri bulduk
        }
    }

    // En büyük sayı ekrana yazdırılıyor
    printf("En büyük sayı = %d\n", enBuyuk);

    return 0; // Ana fonksiyon başarıyla sonlandırılıyor
}
