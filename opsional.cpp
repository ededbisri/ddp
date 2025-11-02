#include <iostream>
using namespace std;

int main(){
    long detik;
    int hari, jam, menit, sisa;

    cout << "Silahkan masukkan bilangan >1 (satuan detik) : ";
    cin >> detik;

    hari = detik / 86400;  //karena 1 hari = 86400 detik
    sisa = detik & 86400;
    jam = sisa / 3600;     //karena 1 jam = 3600 detik
    sisa = sisa % 3600;
    menit = sisa / 60;     //karena 1 menit = 60 detik
    sisa = sisa % 60;

    cout << "================================" << endl;
    cout << "Hasil konversi : " << hari << " hari, " << jam << " jam, " << menit << " menit, " << sisa << " detik" << endl;

    return 0;
}