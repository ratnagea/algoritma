#include <iostream>
using namespace std;

// Fungsi dengan parameter reference
void Tambah(int &c, int &d) {
    c = 10;
    d = 12;
    cout << "\nNilai di Akhir Fungsi Tambah()" << endl;
    cout << "c = " << c << " d = " << d << endl;
}

int main() {
    int a = 3, b = 7;

    cout << "Nilai Sebelum Penanggilan Fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl;

    Tambah(a, b);

    cout << "\nNilai Setelah Penanggilan Fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

