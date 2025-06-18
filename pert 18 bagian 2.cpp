#include <iostream>
using namespace std;

int main() {
    int matriks[3][3];

    // Input nilai ke dalam matriks 3x3
    for (int i = 0; i < 3; i++) {         // baris
        for (int j = 0; j < 3; j++) {     // kolom
            cout << "Input baris" << i+1 << "kolom" << j+1 << " = ";
            cin >> matriks[i][j];
        }
    }

    // Menampilkan matriks 3x3
    cout << "\nMatrik 3x3 =\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

