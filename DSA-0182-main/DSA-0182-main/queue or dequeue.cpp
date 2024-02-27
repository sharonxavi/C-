#include <iostream>
struct Node {
    int data;
    Node* next;
};
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() : front(nullptr), rear(nullptr) {}
    bool isEmpty() {
        return (front == nullptr);
    }
    void enqueue(int value) {
        Node* newNode = new Node{value, nullptr};
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        std::cout << "Enqueued: " << value << std::endl;
    }
    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return -1;
        }
        int dequeuedValue = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr) {
            rear = nullptr;
        }
        return dequeuedValue;
    }
    int frontElement() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return -1;
        }
        return front->data;
    }
};
int main() {
    Queue myQueue;
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    std::cout << "Front element: " << myQueue.frontElement() << std::endl;
    std::cout << "Dequeued: " << myQueue.dequeue() << std::endl;
    std::cout << "Dequeued: " << myQueue.dequeue() << std::endl;
    return 0;
}

