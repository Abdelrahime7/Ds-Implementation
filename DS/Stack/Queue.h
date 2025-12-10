#pragma once

#include <iostream>

template <typename T>
class Queue {
private:
    T* queueArr;       // dynamic array
    int queueSize;     // number of elements

public:
    // Constructor
   
    // Destructor
    ~Queue() {
        delete[] queueArr;
    }

    // Enqueue: add element at the end
    void EnQueue(T value) {
        // allocate new array with +1 size
        T* newArr = new T[queueSize + 1];

        // copy old elements
        for (int i = 0; i < queueSize; i++) {
            newArr[i] = queueArr[i];
        }

        // add new element at the end
        newArr[queueSize] = value;

        // free old array
        delete[] queueArr;

        // update pointer and size
        queueArr = newArr;
        delete[] newArr;
        queueSize++;
    }

    // Dequeue: remove element from the front
    void DeQueue() {
        if (queueSize == 0) return;

        T* newArr = new T[queueSize - 1];

        // copy all except first
        for (int i = 1; i < queueSize; i++) {
            newArr[i - 1] = queueArr[i];
        }

        delete[] queueArr;
        queueArr = newArr;
        delete newArr;
        queueSize--;
    }

    T Peek() {
        if (count == 0) {
            throw std::out_of_range("Queue is empty");
        }
        return queueArr[front];
    }

    // Print queue
    void Print() const {
        for (int i = 0; i < queueSize; i++) {
            std::cout << queueArr[i] << " ";
        }
        std::cout << std::endl;
    }
};


