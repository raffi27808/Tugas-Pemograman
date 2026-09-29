#include <iostream>
using namespace std;

int main() {
   float a;
   float b;
   int operasi;

   cout << "Masukkan angka: ";
   cin >> a;

   while (operasi != 5) {
      cout << "Hasil sementara: " << a << endl;
      cout << "Pilih operasi (1: +, 2: -, 3: *, 4: /, 5: =): ";
      cin >> operasi;
      cout << "Masukkan angka: ";
      cin >> b;

      switch (operasi) {
         case 1:
            a += b;
            break;
         case 2:
            a -= b;
         
         case 3: 
            a *= b;
            break;
         case 4:
            if (b != 0) {
               a /= b;
            } else {
               cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
            }
         break;
      }
   }
   cout << "Hasil akhir: " << a << endl;
   return 0;
}