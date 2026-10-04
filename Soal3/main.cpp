#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

// prosedur menampilkan isi array 2D
void tampilkanArray(int arr[][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// prosedur menukar isi 2 array 2D pada posisi tertentu
void tukarPosisi(int arr1[][COLS], int arr2[][COLS], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

int main() {
    // 2 buah array 2D integer berukuran 3x3
    int array1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[ROWS][COLS] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    // 2 buah pointer integer
    int *ptr1 = &array1[0][0];
    int *ptr2 = &array2[0][0];

    cout << "=== Array 1 (Awal) ===" << endl;
    tampilkanArray(array1, ROWS, COLS);

    cout << "\n=== Array 2 (Awal) ===" << endl;
    tampilkanArray(array2, ROWS, COLS);

    // menampilkan nilai yang ditunjuk pointer
    cout << "\nNilai yang ditunjuk ptr1: " << *ptr1 << endl;
    cout << "Nilai yang ditunjuk ptr2: " << *ptr2 << endl;

    // menukar isi pada posisi tertentu
    int baris, kolom;
    cout << "\nMasukkan baris (0-2) : ";
    cin >> baris;
    cout << "Masukkan kolom (0-2) : ";
    cin >> kolom;

    tukarPosisi(array1, array2, baris, kolom);

    cout << "\n=== Array 1 (Sesudah Tukar) ===" << endl;
    tampilkanArray(array1, ROWS, COLS);

    cout << "\n=== Array 2 (Sesudah Tukar) ===" << endl;
    tampilkanArray(array2, ROWS, COLS);

    return 0;
}