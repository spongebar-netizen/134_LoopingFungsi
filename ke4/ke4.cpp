#include <iostream>
using namespace std;

int nTelur, nMie, nAir, jumlah;
int hTelur = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
    cout << " Masukkan Nama =";
    cin >> nama;
    cout << "Masukkan Jumlah Telur = ";
    cin >> nTelur;
    cout << "Masukkan Jumlah Mie = ";
    cin >> nMie;
    cout << "Masukkan Jumlah Air Mineral ";
    cin >> nAir;
}

int hitungharga() {
    return (nTelur * hTelur) + (nMie * hMie) + (nAir * hAir);
}

void display() {
    cout << "Nama = " << nama << endl;
    cout << "Jumlah Telur =" << nTelur << endl;
    cout << "Jumlah Mie =" << nMie << endl;
    cout << "Jumlah Air =" << nAir << endl;
    cout << "Total Harga Rp. =" << hitungharga() << endl;

}



int main()
{
    char pilihan;

    do
    {
        input();
        display();

        cout << "Apakah Anda Ingin mengulangi (y/n) ? ";
        cin >> pilihan;

        system("cls");

    } while (pilihan == 'y' || pilihan == 'Y');

}