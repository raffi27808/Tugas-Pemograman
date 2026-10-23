#include <stdio.h>

int main() {
    int n;
scanf("%d", &n);
int k[n];
for (int i = 1; i <= n; i++) {
    scanf("%d", &k[i]);
}
int total = 0;
int terbanyak = k[1];

for (int i = 1; i <= n; i++) {
    total += k[i];
}

for (int i = 1; i <= n; i++) {
    if (k[i] > terbanyak) {
        terbanyak = i;
    }
}
printf("Total Koin: %d\n", total);
printf("Peti Terkaya: %d", terbanyak);
    return 0;
}