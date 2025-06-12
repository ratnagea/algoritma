#include <iostream>
using namespace std;

void Tambah(int m, int n) {
    n = m + n;
    cout << "\nNilai di dalam Fungsi Tambah()" << endl;
    cout << "n = " << m << " n = " << n << endl;
}

int main() {
    int a = 5, b = 9;

    cout << "Nilai Sebelum Fungsi Digunakan" << endl;
    cout << "a = " << a << " b = " << b << endl;

    Tambah(a, b);

    cout << "\nNilai Setelah Fungsi Digunakan" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

