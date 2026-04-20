#include <iostream>
using namespace std;

class Barang
{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalproduksi;
    void tampilkanData()
    {
        cout << "NAMA : " << nama << endl;
        cout << "JUMLAH : " << jumlah << endl;
        cout << "KATEGORI : " << kategori << endl;
        cout << "TANGGAL PRODUKSI : " << tanggalproduksi << endl;
    }
};

int main()
{
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalproduksi = "2024-01-01";

    Barang nonelektronik;
    nonelektronik.nama = "Kunci";
    nonelektronik.jumlah = 20;
    nonelektronik.kategori = "Non Elektronik";
    nonelektronik.tanggalproduksi = "2025-06-20";

    elektronik.tampilkanData();
    nonelektronik.tampilkanData();
}