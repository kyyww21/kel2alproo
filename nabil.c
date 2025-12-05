#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Buku {
    char kode[20];
    char judul[100];
    char kelas[10];
    char mapel[50];
};

void tambahBuku() {
    struct Buku bk;
    FILE *fp = fopen("database_buku.txt", "a");

    if (!fp) {
        printf("Gagal membuka file!\n");
        return;
    }

    printf("\n=== Input Data Buku ===\n");
    printf("Kode Buku    : ");
    scanf(" %[^\n]", bk.kode);

    printf("Judul Buku   : ");
    scanf(" %[^\n]", bk.judul);

    printf("Kelas        : ");
    scanf(" %[^\n]", bk.kelas);

    printf("Mapel        : ");
    scanf(" %[^\n]", bk.mapel);

    fprintf(fp, "%s|%s|%s|%s\n", bk.kode, bk.judul, bk.kelas, bk.mapel);

    fclose(fp);
    printf("\nData buku berhasil disimpan!\n");
}

void tampilBuku() {
    struct Buku bk;
    FILE *fp = fopen("database_buku.txt", "r");

    if (!fp) {
        printf("Belum ada data buku.\n");
        return;
    }

    printf("\n=== Daftar Buku Tersimpan ===\n");
    printf("%-15s %-50s %-6s %-20s\n", "Kode", "Judul", "Kelas", "Mapel");
    printf("-------------------------------------------------------------------------------\n");

    while (fscanf(fp, "%[^|]|%[^|]|%[^|]|%[^\n]\n",
                  bk.kode, bk.judul, bk.kelas, bk.mapel) != EOF) {
        printf("%-15s %-50s %-6s %-20s\n",
               bk.kode, bk.judul, bk.kelas, bk.mapel);
    }

    fclose(fp);
}
