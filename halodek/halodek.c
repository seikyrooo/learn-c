#include <stdio.h>

int main() {
    char nama[20];
    int tahunLahir, umur;

    printf("Ketikan nama anda : \n");
    scanf(" %s", &nama);

    printf("Ketikan tahun lahir anda : \n");
    if (scanf("%d", &tahunLahir) > 0) {
        umur = 2025 - tahunLahir;
        printf("Halo nama saya %c, umur saya %d tahun", nama, umur);
    } else {
        printf("Silahkan masukan tahun lahir dengan benar \n");
    }

    return 0;
}