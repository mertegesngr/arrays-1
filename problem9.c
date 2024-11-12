#include <stdio.h>  // Standart giriş-çıkış fonksiyonlarını kullanabilmek için gerekli kütüphaneyi ekliyoruz.

int main() {  // Ana fonksiyonumuzu tanımlıyoruz. Programın çalışmaya başladığı yer burasıdır.

    int x;  // Kullanıcının kaç öğrenci notu gireceğini tutmak için bir değişken tanımlıyoruz.

    // Kullanıcıya kaç tane öğrenci notu gireceğini soruyoruz.
    printf("Kaç tane öğrencinin notunu gireceksiniz: ");
    scanf("%d", &x);  // Kullanıcının girdiği değeri 'x' değişkenine atıyoruz.

    int arr[x];  // 'x' boyutunda bir dizi tanımlıyoruz. Bu dizi öğrencilerin notlarını tutacak.

    float toplam = 0;  // Tüm notların toplamını hesaplamak için 'toplam' adlı bir değişken tanımlıyoruz.
    int enbuyuk;  // En yüksek notu tutmak için bir değişken tanımlıyoruz.
    int endusuk;  // En düşük notu tutmak için bir değişken tanımlıyoruz.

    // Kullanıcının gireceği notları almak için bir döngü başlatıyoruz.
    for (int i = 0; i < x; i++) {  // 'i' 0'dan başlar ve 'x' değerine ulaşana kadar döngü devam eder.

        // Hangi öğrencinin notunu girmemiz gerektiğini belirten bir mesaj yazdırıyoruz.
        printf("Öğrenci %d: ", i + 1);
        scanf("%d", &arr[i]);  // Kullanıcının girdiği notu dizinin 'i' indeksine atıyoruz.
        printf("\n");  // Yeni bir satıra geçiyoruz.

        toplam = toplam + arr[i];  // Her notu toplama ekleyerek, toplam notu hesaplıyoruz.

        if (i == 0) {  // İlk elemanı girerken en yüksek ve en düşük not olarak belirliyoruz.
            endusuk = arr[0];  // En düşük notu ilk girilen nota eşitliyoruz.
            enbuyuk = arr[0];  // En yüksek notu da ilk girilen nota eşitliyoruz.
        }

        // Mevcut not, en büyük nottan büyük veya eşitse en yüksek not olarak güncelliyoruz.
        if (enbuyuk <= arr[i]) {
            enbuyuk = arr[i];
        }

        // Mevcut not, en düşük nottan küçük veya eşitse en düşük not olarak güncelliyoruz.
        if (endusuk >= arr[i]) {
            endusuk = arr[i];
        }
    }

    float ort = toplam / x;  // Notların ortalamasını hesaplayarak 'ort' değişkenine atıyoruz.

    printf("Ortalama = %f\n", ort);  // Ortalamayı ekrana yazdırıyoruz.
    printf("En yüksek not = %d\n", enbuyuk);  // En yüksek notu ekrana yazdırıyoruz.
    printf("En düşük not = %d\n", endusuk);  // En düşük notu ekrana yazdırıyoruz.

    return 0;  // Programın başarılı bir şekilde çalıştığını belirtmek için 0 döndürüyoruz.
}
