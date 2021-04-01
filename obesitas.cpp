# include <iostream>

using namespace std;

//Deklarasi Void
void wanita ();
void pria ();

//Penginputan Gender
void gender () {

    string gender;
    cout << "Jenis Kelamin (W/P) : ";
    cin >> gender;
        if (gender == "W" || gender == "w") {
            wanita();
        }
        else if ( gender == "P" || gender == "p") {
            pria();
        }
}

void wanita () {
    float weight, wrist, hip,forearm, waist ;
    float A1, A2, A3, A4, A5, B;

    float body_fat, body_fat_percentage;

    //Input Data
    cout << "Masukkan Data : " << endl;

    cout << "Weight : ";
        cin >> weight;
    
    cout << "Wrist measurement (at fullest point) : ";
        cin >> wrist;

    cout << "Hip measurement (at fullest point) : ";
        cin >> hip;
    
    cout << "Forearm Measurement : ";
        cin >> forearm;

    cout << "Waist measurement (at navel) : ";
        cin >> waist;

    //Penghitungan
    A1  = (weight * 0.732) + 8.987;
    A2  = wrist / 0.157;
    A3  = waist * 0.157;
    A4  = hip * 0.249;
    A5  = forearm * 0.434;

    B   = A1 + A2 - A3 - A4 + A5;

    body_fat = weight - B;
    body_fat_percentage = (body_fat * 100) / weight;

    //Hasil
    cout << "\n";
    cout << "========== Your Body Information ==========" << endl;

    //Nilai Body Fat
    cout << "Your Body Fat is : " << body_fat << endl;

    //Nilai Body Fat
    cout << "Your Body Fat Percentage (BEP) is : " << body_fat_percentage << endl;
    
    // Kategori
    if ( body_fat_percentage <= 32 ) {
        cout <<  "Your Category is Normal" << endl;
    }
    else {
        cout << "Your Category is Obesitas" << endl;
    }


}

void pria () {
    float weight, wrist ;
    float A1, A2, B;

    float body_fat, body_fat_percentage;

    //Input Data
    cout << "Masukkan Data : " << endl;

    cout << "Weight : ";
        cin >> weight;
    
    cout << "Wrist : ";
        cin >> wrist;

    //Penghitungan
    A1  = (weight * 1.082) + 94.42;
    A2  = wrist * 4.15;

    B   = A1 - A2;

    body_fat = weight - B;
    body_fat_percentage = (body_fat * 100) / weight;

    //Hasil
    cout << "\n";
    cout << "========== Your Body Information ==========" << endl;

    //Nilai Body Fat
    cout << "Your Body Fat is : " << body_fat << endl;

    //Nilai Body Fat
    cout << "Your Body Fat Percentage (BEP) is : " << body_fat_percentage << endl;
    
    // Kategori
    if ( body_fat_percentage <= 32 ) {
        cout <<  "Your Category is Normal" << endl;
    }
    else {
        cout << "Your Category is Obesitas" << endl;
    }


}

int main () {
    gender ();

    return 0;
}