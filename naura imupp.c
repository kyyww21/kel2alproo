#include <stdio.h>
#include <string.h>

int main() {
    // Daftar buku yang tersedia
    char bukuTersedia[][10] = {"BK001", "BK002", "BK003", "BK004"};
    int jumlah = 4;

    char kode[10];
    int ditemukan = 0;

    printf("Masukkan kode buku: ");
    scanf("%s", kode);

    // Cek apakah kode ada di daftar
    for (int i = 0; i < jumlah; i++) {
        if (strcmp(kode, bukuTersedia[i]) == 0) {
            ditemukan = 1;
            break;
        }
    }

    // Output status
    if (ditemukan)
        printf("Status buku: tersedia\n");
    else
        printf("Status buku: dipinjam\n");

    return 0;
}
