#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <string>
using namespace std;

// Struktur data pelajaran
struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

// Deklarasi function dan procedure
pelajaran create_pelajaran(string namaMapel, string kodeMapel);
void tampil_pelajaran(pelajaran pel);

#endif // PELAJARAN_H_INCLUDED