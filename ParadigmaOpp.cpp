#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    int nim;
    string nama;
    float nilai;

    void printData()
    {
        cout << "NIM : " << nim << endl;
        cout << "NAMA : " << nama << endl;
        cout << "NILAI : " << nilai << endl;
    }
};

int main()
{
    Mahasiswa mhs;
    mhs.nim = 2022;
    mhs.nama = "Abra";
    mhs.nilai = 90.5;

    mhs.printData();
}
