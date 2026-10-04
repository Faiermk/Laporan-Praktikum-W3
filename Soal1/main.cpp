#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    const int MAX = 10;
    Mahasiswa mhs[MAX];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> jumlah;
    cin.ignore();

    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Data Mahasiswa ke-" << i + 1 << " ---" << endl;
        cout << "Nama  : ";
        getline(cin, mhs[i].nama);
        cout << "NIM   : ";
        getline(cin, mhs[i].nim);
        cout << "Nilai UTS   : ";
        cin >> mhs[i].uts;
        cout << "Nilai UAS   : ";
        cin >> mhs[i].uas;
        cout << "Nilai Tugas : ";
        cin >> mhs[i].tugas;
        cin.ignore();

        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n==============================" << endl;
    cout << "   DAFTAR NILAI MAHASISWA    " << endl;
    cout << "==============================" << endl;
    cout << "No | Nama | NIM | UTS | UAS | Tugas | Nilai Akhir" << endl;
    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << " | "
             << mhs[i].nama << " | "
             << mhs[i].nim << " | "
             << mhs[i].uts << " | "
             << mhs[i].uas << " | "
             << mhs[i].tugas << " | "
             << mhs[i].nilaiAkhir << endl;
    }

    return 0;
}