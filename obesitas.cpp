# include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

//Deklarasi Void
void wanita ();
void pria ();

void intro () {
    cout << "\n";
    cout << "=====================================================" << endl;
    cout << "\t\t BODY FAT CALCULATOR \t\t\t" << endl;
    cout << "=====================================================" << endl;
    cout << "\n";
}

//Penginputan Gender

void input_gender () {

    string gender;

    cout << "Pilih Jenis Kelamin (W/P) : ";
    cin >> gender;
        if (gender == "W" || gender == "w") {
            wanita();
        }
        else if ( gender == "P" || gender == "p") {
            pria();
        }
        else {
            cout << "Data yang kamu masukkan tidak valid" << endl;
            input_gender();
        }
}

//KODE UNTUK PENGHITUNGAN BODY FAT WANITA


void wanita () {
    float weight, wrist, hip,forearm, waist ;
    float A1, A2, A3, A4, A5, B;
    float body_fat, body_fat_percentage;

    //Input Data
    cout << "\n";
    cout << "=================== Masukkan Data ===================" << endl;

    cout << "Berat badan (Kg)\t\t\t: ";
        cin >> weight;
    
    cout << "Ukuran Wrist/Pergelangan Tangan (cm)\t: ";
        cin >> wrist;

    cout << "Ukuran Waist/Pinggang (cm)\t\t: ";
        cin >> waist;

    cout << "Ukuran Hip/Panggul (cm)\t\t\t: ";
        cin >> hip;
    
    cout << "Ukuran Forearm/Lengan Bawah (cm)\t: ";
        cin >> forearm;

    //Penghitungan
    A1  = (weight * 0.732) + 8.987;
    A2  = wrist / 3.140;
    A3  = waist * 0.157;
    A4  = hip * 0.249;
    A5  = forearm * 0.434;

    B   = A1 + A2 - A3 - A4 + A5;

    body_fat = weight - B;
    body_fat_percentage = (body_fat * 100) / weight;

    //Hasil
    cout << "\n";
    cout << "================ Informasi Badan Kamu ===============" << endl;

    //Nilai Body Fat
    cout << "Berat badan\t\t\t\t: " << body_fat << " Kg" << endl;

    //Nilai Body Fat
    cout << "Persentase Lemak Tubuh (BEP)\t\t: " << body_fat_percentage << " %" << endl;
    
    // Kategori
    cout << "Kamu termasuk\t\t\t\t: ";
        if ( body_fat_percentage <= 26 ) {
            cout <<  "Normal" << endl;
        }
        else {
            cout << "Obesitas" << endl;
        }

}

//KODE UNTUK PENGHITUNGAN BODY FAT PRIA

void pria () {
    float weight, wrist ;
    float A1, A2, B;
    float body_fat, body_fat_percentage;

    //Input Data
    cout << "\n";
    cout << "=================== Masukkan Data ===================" << endl;

    cout << "Berat badan (Kg)\t\t\t: ";
        cin >> weight;
    
    cout << "Ukuran Wrist/Pergelangan Tangan (cm)\t: ";
        cin >> wrist;

    //Penghitungan
    A1  = (weight * 1.082) + 94.42;
    A2  = wrist * 4.15;

    B   = A1 - A2;

    body_fat = weight - B;
    body_fat_percentage = (body_fat * 100) / weight;

    //Hasil
    cout << "\n";
    cout << "================ Informasi Badan Kamu ===============" << endl;
    
    //Nilai Body Fat
    cout << "Berat badan\t\t\t\t: " << body_fat << " Kg" <<endl;

    //Nilai Body Fat
    cout << "Persentase Lemak Tubuh (BEP)\t\t: " << body_fat_percentage << " %" << endl;
    
    // Kategori
    cout << "Kamu termasuk\t\t\t\t: ";
        if ( body_fat_percentage <= 26 ) {
            cout <<  "Normal" << endl;
        }
        else {
            cout << "Obesitas" << endl;
        }


}

void closing () {
    cout << endl;
    cout << "==================== Terima Kasih ===================" << endl;

}


int main () {
    intro ();
    input_gender ();
    closing ();
    return 0;
}