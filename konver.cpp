#include <iostream>
using namespace std;

int main() {
    int jam, menit, detik, sisa;

    cout << "Masukkan bilangan >1 (satuan detik) : ";
    cin >> detik;

    jam = detik / 3600;  //karena 1 jam = 3600 detik
    sisa = detik % 3600; 
    menit = sisa / 60;    //karena 1 menit = 60 detik
    sisa = sisa % 60;

    cout << "Hasil konversi: " << jam << " jam, " << menit << " menit, " << sisa << " detik" << endl;

    return 0;
}