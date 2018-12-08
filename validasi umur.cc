#include<iostream>
using namespace std;
int main () {
int lahir,usia;

cout<<"==================== APLIKASI VALIDASI USIA ==================="<<endl;
cout<<"==============================================================="<<endl;

    cout<<"SILAHKAN MASUKKAN TAHUN KELAHIRAN ANDA = ";
    cin>>lahir;

    usia=2018-lahir;
    cout<<"USIA ANDA SAAT INI ADALAH = "<<usia<<" TAHUN"<<endl;

    if (usia > 17 )
    cout<<"SELAMAT, ANDA BISA MEMASUKI KELAS INI";

    else if (usia < 17)
    {
        cout<<"MAAF, ANDA BELUM DAPAT MEMASUKI KELAS INI, KARENA ANDA DIBAWAH UMUR";
    }
    return 0;
    }
