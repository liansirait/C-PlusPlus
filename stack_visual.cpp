#include <iostream>
using namespace std;

int st[5], top = -1;

// Menampilkan isi stack
void tampil() {
    cout << "Stack: ";
    for (int i = top; i >= 0; i--)
        cout << st[i] << " ";
    cout << endl;
}

// Push
void push(int x) {
    st[++top] = x;
    cout << "Push " << x << endl;
    tampil();
}

// Pop
void pop() {
    cout << "Pop " << st[top--] << endl;
    tampil();
}

int main() {
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
}
