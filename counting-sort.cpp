#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {4, 2, 2, 8, 3, 3, 1};
    int maxVal = 8;

    vector<int> count(maxVal + 1, 0);

    for (int x : a) count[x]++;        // hitung frekuensi
    for (int i = 1; i <= maxVal; i++) // prefix sum
        count[i] += count[i - 1];

    vector<int> out(a.size());
    for (int i = a.size() - 1; i >= 0; i--)  // susun hasil
        out[--count[a[i]]] = a[i];

    for (int x : out) cout << x << " ";
}
