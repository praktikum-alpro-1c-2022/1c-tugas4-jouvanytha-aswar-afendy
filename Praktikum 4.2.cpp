#include <iostream>
using namespace std;

int main (){
    string user;
    string pass;
        cout << "Masukkan Username Anda : ";
        cin >> user;
        cout << "Masukkan Passwoard Anda : ";
        cin >> pass;

    if(user == "jojo" && pass == "777"){
        cout << "Username Anda sesuai, Passwoard Anda sesuai, Login Berhasil!" << endl;

    }else if(user == "jojo" && pass != "777"){
        cout << "Password Anda salah, Login Gagal!" << endl;

    }else if(user != "jojo" &&  pass == "777"){
        cout << "Username Anda salah Login Gagal!" << endl;
    }else{
        cout << "Username dan Passwoard tidak sesuai, Login Gagal!";
    }

return 0;
}
