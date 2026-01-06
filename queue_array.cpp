#include <iostream>
using namespace std;

int data[5];          // array queue
int front = 0, rear = -1;

// enqueue = tambah data ke belakang
void enqueue(int x) {
    data[++rear] = x;
}

// dequeue = hapus data dari depan
void dequeue() {
    front++;
}

int main() {
    // enqueue (masuk)
    enqueue(10);
    enqueue(20);
    enqueue(30);

    // dequeue (keluar satu)
    dequeue();

    // tampilkan isi queue
    cout << "Isi Queue: ";
    for (int i = front; i <= rear; i++)
        cout << data[i] << " ";

    return 0;
}
