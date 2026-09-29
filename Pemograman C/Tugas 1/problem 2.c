#include <stdio.h>

int main()
{
    float pi = 3.14159; // deklarasi dan menentukan variabel pi

    //  deklarasi variabel dan tipe data
    int diameter_tabung;
    int tinggi_tabung;
    float luas_tabung;
    float volume_tabung;

    // input nilai diameter dan tinggi tabung
    printf("Masukkan Diameter Tabung: ");
    scanf("%d", &diameter_tabung);
    printf("Masukkan Tinggi Tabung: ");
    scanf("%d", &tinggi_tabung);

    // menentukan tipe data dan nilai variabel jari jari tabung dan operasi mencari nilai luas dan volume tabung
    float jari_tabung = (float) diameter_tabung / 2;
    luas_tabung =  2 * pi * (float) jari_tabung * (jari_tabung + tinggi_tabung);
    volume_tabung = pi * (float) (jari_tabung * jari_tabung) * tinggi_tabung;

    // meng-output nilai luas dan volume tabung
    printf("Luas Tabung adalah %.2f\n", luas_tabung);
    printf("Volume Tabung adalah %.2f", volume_tabung);

    return 0;
}