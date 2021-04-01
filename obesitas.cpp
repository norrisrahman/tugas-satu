# include <iostream>

using namespace std;

//Deklarasi Void
void wanita ();
void pria ();

//Penginputan Gender
void input_gender () {

    string gender;

    cout << "\n";
    cout << "================ Input Your Gender ================" << endl;
    
    cout << "Jenis Kelamin (W/P) : ";
    cin >> gender;
        if (gender == "W" || gender == "w") {
            wanita();
        }
        else if ( gender == "P" || gender == "p") {
            pria();
        }
        else {
            input_gender();
        }
}

void wanita () {
    float weight, wrist, hip,forearm, waist ;
    float A1, A2, A3, A4, A5, B;

    float body_fat, body_fat_percentage;

    //Input Data
    cout << "Masukkan Data : " << endl;

    cout << "Weight in Kg : ";
        cin >> weight;
    
    cout << "Wrist measurement (at fullest point) : ";
        cin >> wrist;

    cout << "Waist measurement (at navel) : ";
        cin >> waist;

    cout << "Hip measurement (at fullest point) : ";
        cin >> hip;
    
    cout << "Forearm Measurement : ";
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
    cout << "============== Your Body Information ==============" << endl;

    //Nilai Body Fat
    cout << "Your Body Fat is\t\t\t: " << body_fat << endl;

    //Nilai Body Fat
    cout << "Your Body Fat Percentage (BEP) is\t: " << body_fat_percentage << " %" << endl;
    
    // Kategori
    cout << "Your Category is\t\t\t: ";
    if ( body_fat_percentage <= 26 ) {
        cout <<  "Normal" << endl;
    }
    else {
        cout << "Obesitas" << endl;
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
    cout << "============== Your Body Information ==============" << endl;
    
    //Nilai Body Fat
    cout << "Your Body Fat is\t\t\t: " << body_fat << endl;

    //Nilai Body Fat
    cout << "Your Body Fat Percentage (BEP) is\t: " << body_fat_percentage << " %" << endl;
    
    // Kategori
    cout << "Your Category is\t\t\t: ";
    if ( body_fat_percentage <= 26 ) {
        cout <<  "Normal" << endl;
    }
    else {
        cout << "Obesitas" << endl;
    }


}

void closing () {
    cout << endl;
    cout << "==================== Thank You ====================" << endl;

}

int main () {
    input_gender ();
    closing ();

    return 0;
}