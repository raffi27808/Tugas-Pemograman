#include <stdio.h>

int main() {
    int n = -1;
    while (n < 0 || n > 80) {
        printf("Jumlah nilai hanya boleh dari 0 sampai 80\n");
        printf("Jumlah data (n): ");
        scanf("%d", &n);
    }
    float jumlah[80];

    for (int i = 1; i <= n; i++) {
        printf("Data ke %d : ", i);
        scanf("%f", &jumlah[i]);
    }
    float min = jumlah[1];
    float max = jumlah[1];
    float total;

    for (int j = 1; j <= n; j++) {
        if (jumlah[j] < min) {
            min = jumlah[j];
        }
        if (jumlah[j] > max) {
            max = jumlah[j];
        }
    }

    for (int k = 1; k <= n; k++) {
        total += jumlah[k];
    }

    float rata = total / n;
    printf("Nilai minimun: %.1f\n", min);
    printf("Nilai maksimum: %.1f\n", max);
    printf("Nilai rata-rata: %.2f\n", rata);

    return 0;
}