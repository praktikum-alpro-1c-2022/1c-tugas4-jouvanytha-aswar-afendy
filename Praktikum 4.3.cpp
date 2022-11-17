#include <iostream>
using namespace std;

int main (){
    int tahun;

    cout << "Nama  : Jouvanytha Aswar Afendy" << endl;
    cout << "Kelas : 1C" << endl;
    cout << " " << endl;

    cout << "Masukkan Tahun : ";
    cin >> tahun;

    if(tahun %4==0){
        cout << tahun << " adalah Tahun Kabisat";
    }else if(tahun %4!=0){
        cout << tahun << " bukan Tahun Kabisat";
    }else{
        cout << "Tahun yang anda masukan salah";
    }
return 0;
}
