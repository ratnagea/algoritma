#include <iostream>
using namespace std;

int main() {
    int nilai;
    char ulang;

    do {
        cout << "Masukkan nilai = ";
        cin >> nilai;

        if (nilai % 2 == 0) {
            cout << "---Bilangan Genap---" << endl;
        } else {
            cout << "---Bilangan Ganjil---" << endl;
        }

        cout << "\nIngin input lagi [Y/T]: ";
        cin >> ulang;

    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}

