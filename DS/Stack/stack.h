#include <vector>
#include <stdexcept>

using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    void push(const T& value) {
        elements.push_back(value);
    }

    void pop() {
        if (elements.empty()) {
            throw out_of_range("Stack is empty");
        }
        elements.pop_back();
    }

    T top() const {
        if (elements.empty()) {
            throw out_of_range("Stack is empty");
        }
        return elements.back();
    }

    bool empty() const {
        return elements.empty();
    }

    void clear() {
        elements.clear();
    }

    size_t size() const {
        return elements.size();
    }
};


