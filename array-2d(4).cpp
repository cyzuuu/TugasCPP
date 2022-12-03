#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
    int Mat_A[4][4],Mat_B[4][4];
    int Mat_C[4][4],Mat_D[4][4], Mat_E[4][4];
    int i,j,k;
    int baris1, kolom1, baris2, kolom2;

    do{
        system("cls");
        cout << "Baris dan kolom tidak boleh lebih dari 4!\n\n";
        cout << "Masukkan banyak baris matriks A : ";
        cin >> baris1;
        cout << "Masukkan banyak kolom matriks A : ";
        cin >> kolom1;
        cout << "Masukkan banyak baris matriks B : ";
        cin >> baris2;
        cout << "Masukkan banyak kolom matriks B : ";
        cin >> kolom2;
    } while (baris1>4 ||kolom1>4||baris2>4||kolom2>4);

    //membaca elemen-elemen matriks A
    cout << "Matriks A ("<<baris1<<"x"<<kolom1<<")\n";
    for (i=0;i<baris1;i++){
        for (j=0;j<kolom1;j++){
            cout << "Elemen "<<i<<","<<j<<" = ";
            cin >> Mat_A[i][j];
        }
    }cout <<endl;

    //membaca elemen-elemen matriks B
    cout << "Matriks B ("<<baris2<<"x"<<kolom2<<")\n";
    for (i=0;i<baris2;i++){
        for (j=0;j<kolom2;j++){
            cout << "Elemen "<<i<<","<<j<<" = ";
            cin >> Mat_B[i][j];
        }
    }cout <<endl;

    //Mencetak elemen A
    cout << "\nMatriks A ("<<baris1<<"x"<<kolom1<<")\n";
    for (i=0;i<baris1;i++){
        for (j=0;j<kolom1;j++){
            cout <<setw(3)<<Mat_A[i][j];
        }cout <<endl;
    }
    //Mencetak elemen B
    cout << "\nMatriks B ("<<baris2<<"x"<<kolom2<<")\n";
    for (i=0;i<baris2;i++){
        for (j=0;j<kolom2;j++){
            cout <<setw(3)<<Mat_B[i][j];
        }cout <<endl;
    }

    if ((baris1==baris2)&&(kolom1==kolom2)){
        //Menghitung jumlah dan selisih dua buah matriks
        for (i=0;i<baris1;i++){
            for (j=0;j<kolom1;j++){
                Mat_C[i][j]=Mat_A[i][j]+Mat_B[i][j];//hitung jumlah
                Mat_D[i][j]=Mat_A[i][j]-Mat_B[i][j];//hitung selisih
            }
        }
        //Mencetak elemen matriks C
        cout << "\nMatriks C ("<<baris1<<"x"<<kolom1<<") = ";
        cout << "\Matriks A ("<<baris1<<"x"<<kolom1<<") + ";
        cout << "\Matriks B ("<<baris2<<"x"<<kolom2<<") \n";
        for (i=0;i<baris1;i++){
            for(j=0;j<kolom1;j++){
                cout <<setw(3)<<Mat_C[i][j];
            }cout << endl;
        }
        //Mencetak elemen matriks D
        cout << "\nMatriks D ("<<baris1<<"x"<<kolom1<<") = ";
        cout << "\Matriks A ("<<baris1<<"x"<<kolom1<<") - ";
        cout << "\Matriks B ("<<baris2<<"x"<<kolom2<<") \n";
        for (i=0;i<baris1;i++){
            for(j=0;j<kolom1;j++){
                cout <<setw(3)<<Mat_D[i][j];
            }cout << endl;
        }
    }else {
        cout << "\nTidak dapat dijumlahkan dan dikurangkan!!!\n\n";
    }

    if (kolom1==baris2){
        //Menghitung perkalian dua buah matriks
        for(i=0;i<baris1;i++){
            for (j=0;j<kolom2;j++){
                Mat_E[i][j]=0;
                for (k=0;k<kolom1;k++)
                Mat_E[i][j]=Mat_E[i][j]+(Mat_A[i][k]*Mat_B[k][j]);
            }
        }

        //Mencetak elemen matriks E
        cout << "\nMatriks E ("<<baris1<<"x"<<kolom1<<") = ";
        cout << "Matriks A("<<baris1<<"x"<<kolom1<<") * ";
        cout << "Matriks B("<<baris2<<"x"<<kolom2<<")\n ";
        for (i=0;i<baris1;i++){
            for(j=0;j<kolom1;j++){
                cout <<setw(3)<<Mat_E[i][j];
            }cout <<endl;
        }
    }else {
        cout << "\nKedua matriks tidak dapat dikalikan!!!";
    }
    getch();
    return 0;
}
