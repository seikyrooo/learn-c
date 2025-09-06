#include <stdio.h>

int main() {
    int umur;
    float ipk;
    char nama[20];

    // Input dengan scanf
    printf("Masukkan nama: ");
    scanf("%s", nama); // tidak pakai &

    printf("Masukkan umur: ");
    scanf("%d", &umur); // pakai &

    printf("Masukkan IPK: ");
    scanf("%f", &ipk);  // pakai &

    // Output dengan printf (formatting)
    printf("\n=== Data Mahasiswa ===\n");
    printf("Nama   : %-10s\n", nama);     // rata kiri, lebar 10 kolom
    printf("Umur   : %6d tahun\n", umur); // rata kanan, lebar 6 kolom
    printf("IPK    : %8.2f\n", ipk);      // lebar 8 kolom, 2 digit desimal

    return 0;
}
