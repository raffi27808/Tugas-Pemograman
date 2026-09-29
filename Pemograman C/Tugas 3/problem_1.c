#include <stdio.h>

int main() {
    int tahun;
    int bulan;
    int IsTahunKabisat;
    const char  *nama_bulan[13] = {"0", "JANUARI", "FEBRUARI", "MARET", "APRIL", "MEI", "JUNI", "JULI", "AGUSTUS", "SEPTEMBER", "OKTOBER", "NOVEMBER", "DESEMBER"};
    int tanggal[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    printf("Masukkan bulan: ");
    scanf("%d", &bulan);
    if (tahun % 400 == 0) {
        IsTahunKabisat = 1;
    } else if (tahun % 100 == 0) {
        IsTahunKabisat = 0;
    } else if (tahun % 4 ==0) {
        IsTahunKabisat = 1;
    } else {
        IsTahunKabisat = 0;
    }

    if (IsTahunKabisat == 1) {
        tanggal[2] = 29;
        printf("Tahun %d adalah TAHUN KABISAT\n", tahun);
        printf("Jumlah hari pada bulan %s tahun %d adalah %d\n", nama_bulan[bulan], tahun, tanggal[bulan]);
    } else {
        tanggal[2] = 28;
        printf("Tahun %d BUKAN TAHUN KABISAT\n", tahun);
        printf("Jumlah hari pada bulan %s tahun %d adalah %d\n", nama_bulan[bulan], tahun, tanggal[bulan]);
    }
    return 0;
}