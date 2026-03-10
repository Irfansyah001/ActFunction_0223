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

int kelilingPersegi(int p, int l) { // fungsi untuk menghitung keliling persegi panjang dengan parameter
    return 2 * (p + l); // mengembalikan hasil keliling persegi panjang
}

void output() { // fungsi untuk output hasil
    cout << "Luasnya: " << luasPersegi(panjang, lebar) << endl; // menampilkan hasil luas persegi panjang
}

