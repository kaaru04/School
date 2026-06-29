#include <iostream>
#define MAX_SIZE 100
// CCS0015L-Data Structures and Algorithms Page 5 of 10
using namespace std;

class Queue {
private:
    int front, rear, size;
    int arr[MAX_SIZE];

public:
    Queue() 
    {
    front = rear = -1;
    size = 0;
    }

bool isEmpty() 
{
//TODO
    if(size == 0){
    return true;
    }
else{
    return false;
    }
}

bool isFull() 
{
//TODO
    if(size == MAX_SIZE){
    return true;
    }
    else{
    return false;
    }
}

void enqueue(int x) 
{
    if (isFull()) {
    // CCS0015L-Data Structures and Algorithms Page 6 of 10
    cout << "Error: Queue is full!" << endl;
    return;
    }
    if (isEmpty()) {
    front = rear = 0;
    } else {
    rear++;
    }
    arr[rear] = x;
    size++;
}

int dequeue() 
{
    if (isEmpty()) {
    cout << "Error: Queue is empty!" << endl;
    return -1;
    }
    int x = arr[front];
    if (front == rear) {
    front = rear = -1;
    } else {
    front++;
    }
    // CCS0015L-Data Structures and Algorithms Page 7 of 10
    size--;
    return x;
}

int getSize() 
{
    return size;
    }
    //TODO
    void displayQueue() {
    if(isEmpty()){
    cout << "Queue is empty!";
    }
    else{
    for(int i=front; i <= rear ; i++){
    cout << arr[i]<< endl;
    }
    }
}

int getFront() 
{
    //TODO
    return arr[front];
}

};
int main() {
Queue q;
q.enqueue(5);
// CCS0015L-Data Structures and Algorithms Page 8 of 10
q.enqueue(10);
q.enqueue(15);
q.enqueue(20);
q.displayQueue();
cout << "Front element: " << q.getFront() << endl;
q.dequeue();
q.dequeue();
q.displayQueue();
cout << "Front element: " << q.getFront() << endl;
return 0;
}
