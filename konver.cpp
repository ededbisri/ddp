#include <iostream>
using namespace std;

int main() {
    int itsJam, itsMenit, itsDetik, itsSisa;

    cout << "Masukkan bilangan >1 (satuan detik) : ";
    cin >> itsDetik;

    itsJam = itsDetik / 3600;  //karena 1 jam itu sama dengan 3600 detik
    itsSisa = itsDetik % 3600; 
    itsMenit = itsSisa / 60;    //karena 1 menit itu sama dengan 60 detik
    itsSisa = itsSisa % 60;

    cout << "Hasil konversi: " << itsJam << " jam, " << itsMenit << " menit, " << itsSisa << " detik" << endl;

    return 0;
}