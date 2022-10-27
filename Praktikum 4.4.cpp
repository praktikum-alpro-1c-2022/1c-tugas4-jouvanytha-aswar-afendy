#include <iostream>
using namespace std;

int main (){
    int pil;
    cout << "Nama  : Jouvanytha Aswar Afendy" << endl;
    cout << "Kelas : 1C" << endl;
    cout << " " << endl;
    cout << " " << endl;

    cout << "\t Daftar Menu Mc'Yahud\n";
    cout << "==============================================" << endl;
    cout << "1. Nasi Goreng Informatika         Rp. 5.000,-" << endl;
    cout << "2. Nasi Nasi Soto Ayam Internet    Rp. 7.000,-" << endl;
    cout << "3. Gado-Gado Disket                Rp. 4.500,-" << endl;
    cout << "4. Bubur Ayam LAN                  Rp. 4.000,-" << endl;
    cout << "==============================================" << endl;

    cout << "Masukkan Pilihan Anda = ";
    cin >> pil;
    cout << " \n";
    switch (pil){
    case 1:
        cout << "Nasi Goreng Informatika Rp. 5.000,-";
        break;
    case 2:
        cout << "Nasi Soto Ayam Internet Rp. 7.000,-";
        break;
    case 3:
        cout << "Gado-Gado Disket Rp. 4.000,-";
        break;
    case 4:
        cout << "Bubur Ayam LAN Rp. 4.500,-";
        break;
    }

return 0;
}
