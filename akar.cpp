#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <limits>
using namespace std;

//Kode Untuk reload
void reload () {
    cout << "Tekan Enter Untuk Mengulangi...";
    cin.get();
    std::cin.sync(); std::cin.get();
    if (system("CLS")) system("clear");

}

int main () {
    float a, b, c, D;
    float x1, x2;

    //Header / Intro
    cout << "\n";
    cout << "===================================================================" << endl;
    cout << "\t\t KALKULATOR AKAR PERSAMAAN KUADRAT" << endl;
    cout << "===================================================================" << endl;
    cout << "\n";

    //User Input Data
    cout << "Masukkan Nilai a : ";
        cin >> a;
    cout << "Masukkan Nilai b : ";
        cin >> b;
    cout << "Masukkan Nilai c : ";
        cin >> c;

    cout << "\n";
    cout << "======================= Hasil dan Jenis Akar ======================" << endl;
    cout << "\n";

    //Penghitungan Nilai Determinan
    D = pow(b, 2) -4*a*c;

    if ( D > 0) {

        x1 = (-b + pow(D, 0.5)) / (2*a);
        x1 = (-b - pow(D, 0.5)) / (2*a);

        cout <<  "Akar dari persamaan persebut adalah : Dua Akar Real" << endl;
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;

    }
    if ( D == 0 ) {
        
        x1 = -b / 2*a;

        cout << "Akar dari persamaan persebut adalah : Akar Kembar ( Sama)" << endl;
        cout <<  "X1 = " << x1 << endl;
        cout <<  "X2 = " << x1 << endl;
    }
    else {
        cout << "Akar dari persamaan persebut adalah : Dua Akar Kompleks"  << endl;
    }

    cout << "\n";
    cout << "============================= Selesai =============================" << endl;
    cout << "\n";

    //Reload
    reload ();

    //Kembali Ke Line Awal
    main ();
    
    return 0;


}