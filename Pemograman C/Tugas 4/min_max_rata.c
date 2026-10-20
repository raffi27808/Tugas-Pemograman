#include <stdio.h>

int main() {
    int n = -1; // deklarasi variabel n untuk menjadi jumlah array

    // input nilai, jika input kurang dari 0 atau lebih dari 80 maka akan meminta input lagi
    while (n < 0 || n > 80) {
        printf("Jumlah nilai hanya boleh dari 0 sampai 80\n");
        printf("Jumlah data (n): ");
        scanf("%d", &n);
    }

    float data[80]; // deklarasi array data dengan rentang maksimal 80
    // input nilai dari array 1 sampai n (0 diabaikan)
    for (int i = 1; i <= n; i++) {
        printf("Data ke %d : ", i);
        scanf("%f", &data[i]);
    }

    // deklarasi variabel min, max, total dan input nilai awal min dan max
    float min = data[1];
    float max = data[1];
    float total;

    // mengecek kondisi untuk menentukan nilai min dan max setiap nilai array
    for (int j = 1; j <= n; j++) {
        if (data[j] < min) {
            min = data[j];
        }
        if (data[j] > max) {
            max = data[j];
        }
    }

    // mencari total dari semua nilai array
    for (int k = 1; k <= n; k++) {
        total += data[k];
    }

    // deklarasi variabel dan nilai rata rata dan meng-output sesuai format tugas
    float rata = total / n;
    printf("Nilai minimun: %.1f\n", min);
    printf("Nilai maksimum: %.1f\n", max);
    printf("Nilai rata-rata: %.2f\n", rata);

    return 0;
}