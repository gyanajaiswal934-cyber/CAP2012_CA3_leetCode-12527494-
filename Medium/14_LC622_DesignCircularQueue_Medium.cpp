
class MyCircularQueue {
private:
    vector<int> arr;
    int frontIndex, rearIndex, capacity, count;

public:
    MyCircularQueue(int k) {
        arr.resize(k);
        frontIndex = 0;
        rearIndex = -1;
        capacity = k;
        count = 0;
    }

    bool enQueue(int value) {
        if (isFull()) return false;

        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = value;
        count++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;

        frontIndex = (frontIndex + 1) % capacity;
        count--;
        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return arr[frontIndex];
    }

    int Rear() {
        if (isEmpty()) return -1;
        return arr[rearIndex];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }
};
