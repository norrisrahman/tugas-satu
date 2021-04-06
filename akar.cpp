#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float a, b, c, D;
    float x1, x2, real, imajiner;

    //Header / Intro
    cout << "\n";
    cout << "=============================================================" << endl;
    cout << "\t\t KALKULATOR AKAR PERSAMAAN KUADRAT \t\t\t " << endl;
    cout << "=============================================================" << endl;
    cout << "\n";

    //User Input Data
    cout << "Masukkan Nilai A : ";
        cin >> a;
    cout << "Masukkan Nilai B : ";
        cin >> b;
    cout << "Masukkan Nilai C : ";
        cin >> c;

    cout << "\n";
    cout << "==================== Hasil dan Jenis Akar ===================" << endl;
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
    cout << "========================== Selesai ==========================" << endl;
    cout << "\n";
    
    return 0;


}