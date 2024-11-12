#include <stdio.h>  // Standart giriş-çıkış fonksiyonlarını kullanabilmek için gerekli kütüphaneyi ekliyoruz.

int main() {  // Ana fonksiyonumuzu tanımlıyoruz. Programın çalışmaya başladığı yer burasıdır.

    int x;  // Kullanıcının gireceği Fibonacci terim sayısını tutmak için bir değişken tanımlıyoruz.

    // Kullanıcıya Fibonacci serisinin kaçıncı terimine kadar yazdırmak istediğini soruyoruz.
    printf("Fibonacci serisinin kaçıncı terimine kadar yazdırmak istiyorsunuz: ");
    scanf("%d", &x);  // Kullanıcının girdiği değeri 'x' değişkenine atıyoruz.
    printf("\n");  // Yeni bir satıra geçiyoruz.

    int arr[x];  // 'x' boyutunda bir dizi tanımlıyoruz. Bu dizi, Fibonacci serisini tutacaktır.

    arr[0] = 0;  // Fibonacci serisinin ilk terimi 0 olduğundan, dizinin ilk elemanını 0 olarak atıyoruz.
    arr[1] = 1;  // Fibonacci serisinin ikinci terimi 1 olduğundan, dizinin ikinci elemanını 1 olarak atıyoruz.

    // Fibonacci serisinin kalan terimlerini hesaplamak için bir döngü başlatıyoruz.
    for (int i = 2; i < x; i++) {  // Döngü 'i' 2'den başlayarak 'x' değerine ulaşana kadar devam eder.

        arr[i] = arr[i - 1] + arr[i - 2];  // Dizinin 'i' indeksine önceki iki terimin toplamını atıyoruz.
        // Fibonacci serisinde her terim, kendisinden önceki iki terimin toplamıdır.
    }

    // Hesaplanan Fibonacci serisini ekrana yazdırmak için bir döngü kuruyoruz.
    for (int k = 0; k < x; k++) {  // Döngü 'k' 0'dan başlayarak 'x' değerine ulaşana kadar devam eder.

        printf("%d\n", arr[k]);  // Dizinin 'k' indeksindeki Fibonacci sayısını ekrana yazdırıyoruz.
    }

    return 0;  // Programın başarılı bir şekilde çalıştığını belirtmek için 0 döndürüyoruz.
}
