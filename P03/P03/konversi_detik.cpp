#include <iostream>

using namespace std;
int main() {
    int total_detik, jam, menit, detik, sisa;

    cout << "Masukkan jumlah detik: ";
    cin >> total_detik;
// hitung jam
    jam = total_detik / 3600;
    sisa = total_detik % 3600;
// hitung menit
   menit = sisa / 60;
   detik = sisa % 60;
//tampilan hasil
   cout << total_detik  << "detik sama dengan:\n";
   cout << jam          << "jam\n";
   cout << menit        << "menit,dan\n";
   cout << detik        << "detik\n";
return 0;
}