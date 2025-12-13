#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 3, 4, 1, 2};   // data awal
    int n = 5;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {               // jumlah pass
        for (int j = 0; j < n - 1 - i; j++) {       // bandingkan elemen bersebelahan
            if (a[j] > a[j + 1]) {                  // jika salah urut → tukar
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Output hasil sort
    cout << "Hasil sorting: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
