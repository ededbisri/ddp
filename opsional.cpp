#include <iostream>
using namespace std;

int main(){
    long itsDetik;
    int itsHari, itsJam, itsMenit, itsSisa;

    cout << "Silahkan masukkan yang anda mau konversikan (satuan detik) : ";
    cin >> itsDetik;

    itsHari = itsDetik / 86400;  //karena 1 hari = 86400 detik
    itsSisa = itsDetik & 86400;
    itsJam = itsSisa / 3600;     //karena 1 jam = 3600 detik
    itsSisa = itsSisa % 3600;
    itsMenit = itsSisa / 60;     //karena 1 menit = 60 detik
    itsSisa = itsSisa % 60;

    cout << "================================" << endl;
    cout << "Hasil konversi : " << itsHari << " hari, " << itsJam << " jam, " << itsMenit << " menit, " << itsSisa << " detik" << endl;

    return 0;
}