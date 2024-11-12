#include <stdio.h>

int main() {

    int c; // Kullanıcıdan alınacak dizi boyutu

    printf("Dizi boyutu giriniz: "); 
    scanf("%d", &c);
    printf("\n");

    int arr[c]; // Kullanıcıdan alınacak sayıları tutacak dizi

    // Diziye elemanları ata
    for (int i = 0; i < c; i++) {
        printf("Sayı %d: ", i + 1);
        scanf("%d", &arr[i]);
        printf("\n");
    }

    int tersArr[c]; // Ters çevrilmiş diziyi tutacak dizi
    int k = 0; // İndeks değişkeni

    // Diziyi ters çevir
    for (int j = c - 1; j >= 0; j--) {
        tersArr[j] = arr[k]; // Elemanları ters sırada kopyala
        k++;
    }

    // Ters çevrilmiş diziyi ekrana yazdır
    for (int l = 0; l < c; l++) {
        printf("%d\n", tersArr[l]);
    }

    return 0;
}