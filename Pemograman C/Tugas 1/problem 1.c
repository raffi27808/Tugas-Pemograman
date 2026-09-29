#include <stdio.h>

int main() {
    // deklarasi variabel dan tipe data
    char nama[50];                          
    char jabatan[20];                       
    int gaji_kotor;                         
    int pajak;                              
    int zakat;                              
    int gaji_bersih;                        

    // input nama kedalam variabel nama
    printf("Masukkan Nama Anda: ");         
    //scanf("%s", nama);  
    fgets(nama, sizeof(nama), stdin); // menggunakan fgets untuk membaca nama dengan spasi 

    // input nama kedalam variabel jabatan
    printf("Jabatan: ");                    
    //scanf("%s", jabatan);  
    fgets(jabatan, sizeof(jabatan), stdin);
    
    // input nama kedalam variabel gaji_kotor
    printf("Masukkan Gaji Kotor Anda: ");   
    scanf("%d", &gaji_kotor);               

    // mencari nilai pajak, zakat, dan gaji bersih
    pajak = gaji_kotor * 0.07; 
    zakat = gaji_kotor * 0.025; 
    gaji_bersih = gaji_kotor - (pajak + zakat); 

    // meng-output data sesuai format yang ada di soal
    printf("Nama Karyawan: %s\n", nama); 
    printf("Jabatan Karyawan: %s\n", jabatan);
    printf("Jumlah Gaji Kotor: %d\n", gaji_kotor);
    printf("Jumlah Gaji Bersih: %d\n", gaji_bersih);
    printf("Jumlah Pajak Anda: %d\n", pajak);
    printf("Jumlah Zakat Anda: %d\n", zakat);
   
    return 0;
}