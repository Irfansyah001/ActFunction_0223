#include <iostream> // untuk input dan output
using namespace std; // deklarasi variabel global

int panjang, lebar; // fungsi untuk menghitung luas dan keliling persegi panjang

void input() { // fungsi untuk input data
    cout << "Masukkan panjang: "; // meminta input panjang
    cin >> panjang; // membaca input panjang
    cout << "Masukkan Lebar: "; // meminta input lebar
    cin >> lebar; // membaca input lebar
}

int luasPersegi(int p, int l) { // fungsi untuk menghitung luas persegi panjang dengan parameter
    return p * l; // mengembalikan hasil luas persegi panjang
}

