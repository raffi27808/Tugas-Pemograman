#include <stdio.h>

int main() {
    int n;
    printf("Jumlah data (n): "); // input jumlah data
    scanf("%d", &n);
    int data[n];
    int IsDataSorted = 0;
    int data_min, data_max;
    float rata_rata;

    // input array
    for (int i = 1; i <= n; i++) {
        printf("Data ke %d : ", i);
        scanf("%d", &data[i]);
    }

        for (int j = 1; j <= n; j++) {
            if (data[j] < data[j+1]) {
                data_min = data[j];
            }
        }
    printf("data min %d\n data max %d", data_min, data_max);
    return 0;
}