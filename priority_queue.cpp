#include <iostream>
using namespace std;

struct Data {
    char nama;
    int prioritas;
};

Data pq[5];
int n = 0;

// Enqueue (masuk sesuai prioritas)
void enqueue(char nama, int p) {
    int i = n - 1;
    while (i >= 0 && pq[i].prioritas > p) {
        pq[i + 1] = pq[i]; // geser ke kanan
        i--;
    }
    pq[i + 1] = {nama, p};
    n++;
}

// Dequeue (keluar prioritas tertinggi)
void dequeue() {
    cout << "Keluar: " << pq[0].nama 
         << " (P" << pq[0].prioritas << ")\n";
    for (int i = 0; i < n - 1; i++)
        pq[i] = pq[i + 1];
    n--;
}

int main() {
    enqueue('A', 3);
    enqueue('B', 1);
    enqueue('C', 2);

    cout << "Isi antrian:\n";
    for (int i = 0; i < n; i++)
        cout << pq[i].nama << "(P" << pq[i].prioritas << ") ";

    cout << "\n\n";
    dequeue();

    cout << "Sisa antrian:\n";
    for (int i = 0; i < n; i++)
        cout << pq[i].nama << "(P" << pq[i].prioritas << ") ";
}
