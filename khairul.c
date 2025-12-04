#include <stdio.h>

int main() {
    int opsi, SubOpsi1, SubOpsi2, SubOpsi3;

    // Tampilkan menu pertama kali
    printf("Apa yang ingin anda lakukan ?\n"
           "1. Pengelolaan Buku\n"
           "2. Peminjaman Buku\n"
           "3. Pengembalian Buku\n"
           "4. Status Buku\n"
           "5. Pengunjung\n"
           "6. Searching\n"
           "7. Selesai\n"
           "Pilihan Anda: ");
    scanf("%d", &opsi);

    while (opsi != 7) {

        switch (opsi) {
            case 1:
                printf("Apa yang ingin anda lakukan ?\n"
                       "1. Penambahan Buku\n"
                       "2. Daftar Buku\n"
                       "Pilihan Anda: ");
                scanf("%d", &SubOpsi1);

                if (SubOpsi1 == 1)
                    printf("Silahkan tambahkan buku, bla bla bla");
                else if (SubOpsi1 == 2)
                    printf("Daftar Buku, bla bla bla");
                break;

            case 2:
                printf("Silahkan isi data diri, bla bla bla");
                break;

            case 3:
                printf("Buku apa yang ingin anda kembalikan, bla bla bla");
                break;

            case 4:
                printf("Apa yang ingin anda lakukan ?\n"
                       "1. Buku yang sedang dipinjam\n"
                       "2. Buku yang ada\n"
                       "Pilihan Anda: ");
                scanf("%d", &SubOpsi2);

                if (SubOpsi2 == 1)
                    printf("Buku yang sedang dipinjam, bla bla bla");
                else
                    printf("Buku yang masih ada, bla bla bla");
                break;

            case 5:
                printf("1. Masukkan data pengunjung\n"
                       "2. Data pengunjung minggu ini\n"
                       "Pilihan Anda: ");
                scanf("%d", &SubOpsi3);

                if (SubOpsi3 == 1)
                    printf("Nama pengunjung, bla bla bla");
                else
                    printf("Minggu ini ada bla bla pengunjung");
                break;

            case 6:
                printf("(Ketik di sini bla bla bla)");
                break;

            default:
                printf("Pilihan %d tidak valid!\n", opsi);
        }

        // tampilkan menu lagi
        printf("\n\nApa yang ingin anda lakukan ?\n"
               "1. Pengelolaan Buku\n"
               "2. Peminjaman Buku\n"
               "3. Pengembalian Buku\n"
               "4. Status Buku\n"
               "5. Pengunjung\n"
               "6. Searching\n"
               "7. Selesai\n"
               "Pilihan Anda: ");
        scanf("%d", &opsi);
    }

    printf("Terimakasih sudah mengisi");
    return 0;
}
