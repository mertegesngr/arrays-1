#include <stdio.h>  // Standart giriş-çıkış fonksiyonlarını kullanabilmek için gerekli kütüphaneyi ekliyoruz.

int main() {  // Ana fonksiyonumuzu tanımlıyoruz. Programın çalışmaya başladığı yer burasıdır.

    int a;  // Kullanıcının belirleyeceği dizi boyutunu tutmak için bir değişken tanımlıyoruz.

    // Kullanıcıdan dizi boyutunu almamız için bir bilgi mesajı yazdırıyoruz.
    printf("Dizi boyutu: ");
    scanf("%d", &a);  // Kullanıcının girdiği değeri 'a' değişkenine atıyoruz.
    printf("\n");  // Yeni bir satıra geçiyoruz.

    int arr[a];  // Kullanıcının belirlediği boyutta bir tamsayı dizisi tanımlıyoruz.

    // Dizi elemanlarını kullanıcıdan almak için bir döngü kuruyoruz.
    for (int i = 0; i < a; i++) {  // 'i' 0'dan başlar ve 'a' değerine ulaşana kadar artar.
        
        // Kullanıcıya kaçıncı sayı olduğunu belirtmek için bir bilgi mesajı yazdırıyoruz.
        printf("Sayı %d: ", i + 1);  
        scanf("%d", &arr[i]);  // Kullanıcının girdiği değeri dizinin 'i' indeksine atıyoruz.
        printf("\n");  // Yeni bir satıra geçiyoruz.
    }

    int newArr[a];  // Aynı boyutta yeni bir dizi tanımlıyoruz.

    // İlk dizideki elemanları yeni diziye kopyalamak için bir döngü kuruyoruz.
    for (int k = 0; k < a; k++) {  // 'k' 0'dan başlar ve 'a' değerine ulaşana kadar artar.

        newArr[k] = arr[k];  // Eski dizinin 'k' indeksindeki elemanını, yeni dizinin 'k' indeksine atıyoruz.
    }

    // Yeni diziyi ekrana yazdırmak için bir döngü kuruyoruz.
    for (int l = 0; l < a; l++) {  // 'l' 0'dan başlar ve 'a' değerine ulaşana kadar artar.

        printf("%d\n", newArr[l]);  // Yeni dizinin 'l' indeksindeki elemanı ekrana yazdırıyoruz.
    }

    return 0;  // Programın başarılı bir şekilde çalıştığını belirtmek için 0 döndürüyoruz.
}
