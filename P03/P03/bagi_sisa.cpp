#include <iostream>

using namespace std;

int main() {
    int angka1, angka2, hasilBagi, sisaBagi;

    // Membaca dua bilangan bulat dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> angka1;
    cout << "Masukkan bilangan kedua: ";
    cin >> angka2;

    // Menghitung hasil bagi dan sisa bagi (modulo)
    hasilBagi = angka1 / angka2;
    sisaBagi = angka1 % angka2;

    // Menampilkan hasil sesuai format
    cout << angka1 << " dibagi " << angka2 << " adalah " << hasilBagi << " sisa " << sisaBagi << "." << endl;

    return 0;
}