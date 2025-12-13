#include <iostream>
using namespace std;

// Fungsi Sequential Search
int sequentialSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)    // cek satu per satu
            return i;         // kembalikan index jika ketemu
    }
    return -1;                // jika tidak ditemukan
}

int main() {
    int data[] = {10, 22, 35, 40, 55};
    int n = 5;
    int key;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> key;

    int pos = sequentialSearch(data, n, key);

    if (pos != -1)
        cout << "Data ditemukan di index ke-" << pos << endl;
    else
        cout << "Data TIDAK ditemukan.\n";

    return 0;
}