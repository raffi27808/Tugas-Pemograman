#include <stdio.h>

int main() {
    // int point;
    // scanf("%d", &point);

    // if (point < 100) {
    //     printf("Rank: Pemula");
    // }
    // if (point >= 100 && point <= 499) {
    //     printf("Rank: Bronze");
    // }
    // if (point >= 500 && point <= 999) {
    //     printf("Rank: Silver");
    // }
    // if (point >= 1000) {
    //     printf("Rank: Gold");
    // }
    // return 0;

//     int NomorMobil;
//     int NomorGarasi;

//     scanf("%d", &NomorMobil);
//     scanf("%d", &NomorGarasi);

//     printf("Mobil Balap: %d\n", NomorMobil);
//     printf("Lokasi Garasi: %d\n", NomorGarasi);

// float r;
// float t;

// scanf("%f", &r);
// scanf("%f", &t);
// float volume = 3.14 * r * r * t;
// printf("Volume Tabung: %.2f", volume);

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
        terbanyak = k[i];
    }
}
printf("Peti Terkaya: %d", terbanyak);

return 0;
}