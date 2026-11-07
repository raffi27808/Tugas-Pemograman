#include <stdio.h>
void pembalik(int *panjang, int *array, int *tambah) {
for (int i = *panjang-1; i >= 0; i--) {
array[i] += *tambah;
printf("[%d] ", array[i]);
}
}
int main() {
    int panjang;
    scanf("%d", &panjang);
    int energi[panjang];
    for (int i = 0; i < panjang; i++) {
    scanf("%d", &energi[i]);
    }
    int tambahan;
    scanf("%d", &tambahan);

    pembalik(&panjang, energi, &tambahan);
    return 0;
}