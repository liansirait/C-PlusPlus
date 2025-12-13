#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;  // cari tengah

        if (arr[mid] == key)
            return mid;               // nilai ditemukan
        else if (key < arr[mid])
            right = mid - 1;          // geser ke kiri
        else
            left = mid + 1;           // geser ke kanan
    }
    return -1;                        // tidak ditemukan
}

int main() {
    int data[] = {5, 12, 20, 35, 40, 50};
    int n = 6, key;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> key;

    int pos = binarySearch(data, n, key);

    if (pos != -1)
        cout << "Data ditemukan di index ke-" << pos << endl;
    else
        cout << "Data TIDAK ditemukan.\n";

    return 0;
}
