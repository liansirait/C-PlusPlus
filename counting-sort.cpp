#include <iostream>
#include <vector>
using namespace std;

void countingSort(vector<int>& arr, int maxVal) {
    vector<int> count(maxVal + 1, 0);
    vector<int> output(arr.size());

    // Hitung frekuensi setiap angka
    for (int num : arr)
        count[num]++;

    // Ubah ke prefix sum
    for (int i = 1; i <= maxVal; i++)
        count[i] += count[i - 1];

    // Susun hasil (dari belakang agar stabil)
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    arr = output;
}

int main() {
    vector<int> data = {4, 2, 2, 8, 3, 3, 1};
    countingSort(data, 8);

    cout << "Hasil sorting: ";
    for (int x : data) cout << x << " ";
}
