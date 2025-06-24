#include <iostream>
using namespace std;

// Struktur data mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
};

// Node untuk single linked list
struct Node {
    Mahasiswa data;
    Node* next;
};

// Pointer head untuk awal linked list
Node* head = nullptr;

// Tambah data mahasiswa di akhir
void add(Mahasiswa mhs) {
    Node* newNode = new Node{mhs, nullptr};

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }

    cout << "Data mahasiswa berhasil ditambahkan.\n";
}
