#include <iostream>

using namespace std;

int main(){

     // Deklarasi dan inisialisasi array dua dimensi
     // jumlah elemen baris = 3
     // jumlah elemen kolom = 2
     int matrikscontoh [3][2] = {{1,2},{3,4},{5,6}};

     // Mendeklarasi variabel untuk
     // Indeks perulangan
     int i,j;

     cout<<"\t==============================";
     cout<<"\n\t=== Tampil Matriks Ordo 3x2 ===\n";
     cout<<"\t==============================\n\n";

     // Menampilkan matrikcontoh
     cout<<"\nMenampilkan matrik contoh\n";
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<matrikscontoh[i][j]<<" ";
          }
          cout << endl;
     }

     return 0;
}
