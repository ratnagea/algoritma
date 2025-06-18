#include <stdio.h>

// Deklarasi fungsi
void printArray(int a[][3]);

int main()
{
    // Inisialisasi array 2 dimensi
    int matrik1[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int matrik2[2][3] = { {1, 2, 3}, {4, 5, 0} };
    int matrik3[2][3] = { {1, 2}, {4} }; // Sisanya otomatis diisi 0

    // Pemanggilan fungsi untuk mencetak array
    printArray(matrik1);
    printArray(matrik2);
    printArray(matrik3);

    return 0;
}

// Definisi fungsi printArray
void printArray(int a[][3])
{
    int i, j;
    for (i = 0; i <= 1; i++) // Dua baris
    {
        for (j = 0; j < 3; j++) // Tiga kolom
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

