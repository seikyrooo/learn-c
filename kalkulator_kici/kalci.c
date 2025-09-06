#include <stdio.h>

int main() {

    float bil1, bil2;
    int opr, ulang;

    do {
        printf("\nPilih Operasi Aritmatika \n");
        printf("1. Penjumlahan (+) \n");
        printf("2. Pengurangan (-) \n");
        printf("3. Pembagian (/) \n");
        printf("4. Perkalian (*) \n");
        printf("Masukan Nomor Pilihan : ");
        scanf(" %d",&opr);

        printf("Masukan bilangan pertama : ");
        scanf(" %f", &bil1);

        printf("Masukan bilangan kedua : ");
        scanf(" %f", &bil2);

        switch (opr) {
            case 1:
                float tambah = bil1 + bil2;
                printf("Hasil pertambahan dari %.2f dan %.2f adalah %.2f", bil1, bil2, tambah);
                break;
            case 2:
                float kurang = bil1 - bil2;
                printf("Hasil pengurangan dari %.2f dan %.2f adalah %.2f", bil1, bil2, kurang);
                break;
            case 3:
                if (bil2 != 0) {
                    float bagi = bil1 / bil2;
                    printf("Hasil pembagian dari %.2f dan %.2f adalah %.2f", bil1, bil2, bagi);
                } else {
                    printf("Tidak Bisa dibagi dengan 0");
                }
                break;
            case 4:
                float kali = bil1 * bil2;
                printf("Hasil perkalian dari %.2f dan %.2f adalah %.2f", bil1, bil2, kali);
                break;
            default:
                printf("Pilihan tidak valid");
        }
        printf("\nApakah anda ingin mengulang proses?\n1. Ya\n2. Tidak\nMasukan Pilihan : ");
        scanf("%d",&ulang);
    } while (ulang == 1);

    return 0;
}