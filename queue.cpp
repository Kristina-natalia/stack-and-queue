#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong. Tidak dapat menghapus elemen." << endl;
        } else {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue kosong." << endl;
            return -1;
        } else {
            return front->data;
        }
    }

    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Queue queue;

    queue.enqueue(4);
    queue.enqueue(12);
    queue.enqueue(2);

    cout << "Elemen depan: " << queue.peek() << endl;

    queue.dequeue();

    cout << "Elemen depan setelah dequeue: " << queue.peek() << endl;

    queue.dequeue();

    if (queue.isEmpty()) {
        cout << "Queue kosong." << endl;
    } else {
        cout << "Queue tidak kosong." << endl;
    }

    return 0;
}
