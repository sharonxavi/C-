#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    std::cout << "Front of the queue: " << myQueue.front() << std::endl;

    std::cout << "Elements in the queue: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    return 0;
}#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;
    int choice, element;

    do {
        std::cout << "---------------------" << std::endl;
        std::cout << "Queue Operations Menu" << std::endl;
        std::cout << "---------------------" << std::endl;
        std::cout << "1. Enqueue (Push)" << std::endl;
        std::cout << "2. Dequeue (Pop)" << std::endl;
        std::cout << "3. Front" << std::endl;
        std::cout << "4. Display Queue" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter element to enqueue: ";
                std::cin >> element;
                myQueue.push(element);
                std::cout << element << " enqueued to the queue." << std::endl;
                break;
            case 2:
                if (!myQueue.empty()) {
                    std::cout << "Element dequeued: " << myQueue.front() << std::endl;
                    myQueue.pop();
                } else {
                    std::cout << "Queue is empty. Cannot dequeue." << std::endl;
                }
                break;
            case 3:
                if (!myQueue.empty()) {
                    std::cout << "Front of the queue: " << myQueue.front() << std::endl;
                } else {
                    std::cout << "Queue is empty." << std::endl;
                }
                break;
            case 4:
                if (!myQueue.empty()) {
                    std::cout << "Elements in the queue: ";
                    std::queue<int> tempQueue = myQueue; // Create a temporary queue to display elements without affecting the original queue
                    while (!tempQueue.empty()) {
                        std::cout << tempQueue.front() << " ";
                        tempQueue.pop();
                    }
                    std::cout << std::endl;
                } else {
                    std::cout << "Queue is empty." << std::endl;
                }
                break;
            case 5:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    } while (choice != 5);

    return 0;
}

