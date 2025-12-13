#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 2, 4, 6, 1, 3};
    int n = 6;

    for (int i = 1; i < n; i++) {       // mulai dari elemen kedua
        int key = a[i];                // simpan elemen yang akan disisipkan
        int j = i - 1;

        // geser elemen yang lebih besar ke kanan
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;                // letakkan key pada posisi yang benar
    }

    // tampilkan hasil
    cout << "Hasil Insertion Sort: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
