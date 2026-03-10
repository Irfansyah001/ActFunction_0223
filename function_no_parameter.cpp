#include <iostream> // untuk input dan output
using namespace std; // deklarasi variabel global

int panjang, lebar; // fungsi untuk menghitung luas persegi panjang

void input() { // fungsi untuk input data
    cout << "Masukkan panjang: "; // meminta input panjang
    cin >> panjang; // membaca input panjang
    cout << "Masukkan Lebar: "; // meminta input lebar
    cin >> lebar; // membaca input lebar
}

int luasPersegi() { // fungsi untuk menghitung luas persegi panjang
    return panjang * lebar; // mengembalikan hasil luas persegi panjang
}

void output() { // fungsi untuk output hasil
    cout << "Hasilnya: " << luasPersegi(); // menampilkan hasil luas persegi panjang
}

int main() { // fungsi utama
    input(); // memanggil fungsi input untuk mendapatkan data
    output(); // memanggil fungsi output untuk menampilkan hasil
}