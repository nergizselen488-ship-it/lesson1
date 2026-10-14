#include <stdio.h>
#include <math.h>

int main() {
    float tutar, odenen, para_ustu_float;
    int para_ustu_kurus;
    
    // Kupür ve madeni para değişkenleri (adet tutmak için)
    int n200, n100, n50, n20, n10, n5, n1;
    int k50, k25, k10, k5, k1;
    
    // Toplam verilen kupür/madeni para sayısı
    int toplam_kupur;

    // 1. Ürün tutarını ve ödenen parayı alma
    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &tutar);

    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen);

    // Para üstünü float olarak bulma
    para_ustu_float = odenen - tutar;

    // 2. Doğru yuvarlama yöntemi (round fonksiyonu ile)
    para_ustu_kurus = round(para_ustu_float * 100.0);

    // Kupür hesaplamaları (bölme ve mod alma operatörleri ile)
    
    // 200 TL = 20000 Kurus
    n200 = para_ustu_kurus / 20000;
    para_ustu_kurus %= 20000;

    // 100 TL = 10000 Kurus
    n100 = para_ustu_kurus / 10000;
    para_ustu_kurus %= 10000;

    // 50 TL = 5000 Kurus
    n50 = para_ustu_kurus / 5000;
    para_ustu_kurus %= 5000;

    // 20 TL = 2000 Kurus
    n20 = para_ustu_kurus / 2000;
    para_ustu_kurus %= 2000;

    // 10 TL = 1000 Kurus
    n10 = para_ustu_kurus / 1000;
    para_ustu_kurus %= 1000;

    // 5 TL = 500 Kurus
    n5 = para_ustu_kurus / 500;
    para_ustu_kurus %= 500;

    // 1 TL = 100 Kurus
    n1 = para_ustu_kurus / 100;
    para_ustu_kurus %= 100;

    // 50 Kurus
    k50 = para_ustu_kurus / 50;
    para_ustu_kurus %= 50;

    // 25 Kurus
    k25 = para_ustu_kurus / 25;
    para_ustu_kurus %= 25;

    // 10 Kurus
    k10 = para_ustu_kurus / 10;
    para_ustu_kurus %= 10;

    // 5 Kurus
    k5 = para_ustu_kurus / 5;
    para_ustu_kurus %= 5;

    // 1 Kurus
    k1 = para_ustu_kurus / 1;

    // Toplam kupür sayısını aritmetik olarak toplama
    toplam_kupur = n200 + n100 + n50 + n20 + n10 + n5 + n1 + k50 + k25 + k10 + k5 + k1;

    // Tüm kupürleri sıfır olanlar dahil (if kullanılamadığı için) ekrana yazdırma
    printf("\n--- Para Ustu Dagilimi ---\n");
    printf("%d adet 200 TL\n", n200);
    printf("%d adet 100 TL\n", n100);
    printf("%d adet 50 TL\n", n50);
    printf("%d adet 20 TL\n", n20);
    printf("%d adet 10 TL\n", n10);
    printf("%d adet 5 TL\n", n5);
    printf("%d adet 1 TL\n", n1);
    printf("%d adet 50 Kurus\n", k50);
    printf("%d adet 25 Kurus\n", k25);
    printf("%d adet 10 Kurus\n", k10);
    printf("%d adet 5 Kurus\n", k5);
    printf("%d adet 1 Kurus\n", k1);

    // 3. Toplam kupür sayısını yazdırma
    printf("--------------------------\n");
    printf("Musteriye verilen toplam kupur/madeni para sayisi: %d\n", toplam_kupur);

    return 0;
}
