#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk mendapatkan digit tertentu
int getDigit(int num, int exp) {
    return (num / exp) % 10;
}

// Counting sort khusus untuk digit (0–9)
void countingSort(vector<int>& arr, int exp) {
    vector<int> output(arr.size());
    int count[10] = {0};

    // Hitung kemunculan digit
    for (int num : arr)
        count[getDigit(num, exp)]++;

    // Ubah ke prefix sum (posisi sebenarnya)
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Susun berdasarkan digit (dari belakang agar stabil)
    for (int i = arr.size() - 1; i >= 0; i--) {
        int d = getDigit(arr[i], exp);
        output[count[d] - 1] = arr[i];
        count[d]--;
    }

    arr = output;
}

// Radix Sort utama
void radixSort(vector<int>& arr) {
    // Cari angka terbesar
    int maxNum = *max_element(arr.begin(), arr.end());

    // Lakukan sorting per digit: 1, 10, 100, ...
    for (int exp = 1; maxNum / exp > 0; exp *= 10)
        countingSort(arr, exp);
}

int main() {
    vector<int> data = {329, 45, 7, 88, 503};

    cout << "Data awal : ";
    for (int x : data) cout << x << " ";

    radixSort(data);

    cout << "\nData urut : ";
    for (int x : data) cout << x << " ";

    return 0;
}
